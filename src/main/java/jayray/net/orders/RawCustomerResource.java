package jayray.net.orders;

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
import com.mongodb.DBCollection;
import com.mongodb.DBObject;
import com.mongodb.Mongo;
import com.mongodb.util.JSON;

@Path("customer/raw")
public class RawCustomerResource {

	@GET
	@Produces({ MediaType.APPLICATION_JSON })
	public String getCustomers() throws UnknownHostException {

		Mongo m = new Mongo();
		DBCollection data = m.getDB("test").getCollection("test");

		return JSON.serialize(data);
	}

	@GET
	@Path("id/{id}")
	@Produces({ MediaType.APPLICATION_JSON })
	public String getCustomer(@PathParam("id") String id) throws UnknownHostException {

		DBObject searchById = new BasicDBObject("_id", new ObjectId(id));

		Mongo m = new Mongo();
		DBObject data = m.getDB("test").getCollection("test").findOne(searchById);

		return JSON.serialize(data);
	}

	@POST
	@Consumes({ MediaType.APPLICATION_JSON })
	public Response saveCustomer(String customer, @Context UriInfo uriInfo) throws UnknownHostException {
		Mongo m = new Mongo();
		ObjectId id = new ObjectId();
		DBObject dbObject = (DBObject) JSON.parse(customer);
		dbObject.put("_id", id);
		m.getDB("test").getCollection("test").insert(dbObject);
		m.close();

		URI uri = UriBuilder.fromUri(uriInfo.getBaseUri()).path("customer").path("raw").path("id").path(id.toString()).build();
		return Response.created(uri).build();
	}
}
