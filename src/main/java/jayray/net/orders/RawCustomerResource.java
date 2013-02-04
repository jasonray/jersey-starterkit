package jayray.net.orders;

import static jayray.net.orders.DatabaseConnectionHelper.getConnection;
import static jayray.net.orders.DatabaseConnectionHelper.releaseConnection;

import java.net.URI;
import java.net.UnknownHostException;

import javax.ws.rs.Consumes;
import javax.ws.rs.GET;
import javax.ws.rs.POST;
import javax.ws.rs.Path;
import javax.ws.rs.PathParam;
import javax.ws.rs.Produces;
import javax.ws.rs.core.Context;
import javax.ws.rs.core.MediaType;
import javax.ws.rs.core.Response;
import javax.ws.rs.core.UriBuilder;
import javax.ws.rs.core.UriInfo;

import org.bson.types.ObjectId;

import com.mongodb.BasicDBObject;
import com.mongodb.DB;
import com.mongodb.DBCollection;
import com.mongodb.DBObject;
import com.mongodb.util.JSON;

@Path("customer/raw")
public class RawCustomerResource {

	@GET
	@Produces({ MediaType.APPLICATION_JSON })
	public String getCustomers() throws UnknownHostException {

		DBCollection data;
		DB db = getConnection();
		try {
			data = db.getCollection("customer");
		} finally {
			releaseConnection(db);
		}

		String json = JSON.serialize(data);
		return json;
	}

	@GET
	@Path("id/{id}")
	@Produces({ MediaType.APPLICATION_JSON })
	public String getCustomer(@PathParam("id") String id) throws UnknownHostException {
		System.out.println("begin get customer " + id);

		DBObject searchById = new BasicDBObject("_id", new ObjectId(id));

		DBObject data;
		DB db = getConnection();
		try {
			data = db.getCollection("customer").findOne(searchById);
		} finally {
			releaseConnection(db);
		}

		String json = JSON.serialize(data);

		System.out.println("end get customer " + id);
		return json;
	}

	@POST
	@Consumes({ MediaType.APPLICATION_JSON })
	public Response saveCustomer(String customer, @Context UriInfo uriInfo) throws UnknownHostException {
		ObjectId id = new ObjectId();
		DBObject dbObject = (DBObject) JSON.parse(customer);
		dbObject.put("_id", id);

		DB db = getConnection();
		try {
			db.getCollection("customer").insert(dbObject);
		} finally {
			releaseConnection(db);
		}

		URI uri = UriBuilder.fromUri(uriInfo.getBaseUri()).path("customer").path("raw").path("id").path(id.toString()).build();
		return Response.created(uri).build();
	}

}
