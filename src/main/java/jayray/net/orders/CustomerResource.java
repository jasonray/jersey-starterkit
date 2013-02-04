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

import com.google.gson.Gson;
import com.mongodb.BasicDBObject;
import com.mongodb.DB;
import com.mongodb.DBCollection;
import com.mongodb.DBObject;
import com.mongodb.Mongo;
import com.mongodb.util.JSON;

/**
 * The customer resource endpoint is responsible for crud operations for the
 * customer
 */
@Path("customer")
public class CustomerResource {

	@GET
	@Produces({ MediaType.APPLICATION_JSON })
	public String getCustomers() throws UnknownHostException {

		Mongo m = new Mongo();
		DBCollection data = m.getDB("test").getCollection("customer");

		return JSON.serialize(data);
	}

	@GET
	@Path("id/{id}")
	@Produces({ MediaType.APPLICATION_JSON })
	public Customer getCustomer(@PathParam("id") String id) throws UnknownHostException {

		DBObject searchById = new BasicDBObject("_id", new ObjectId(id));

		DB db = getConnection();
		DBObject data;
		try {
			data = db.getCollection("customer").findOne(searchById);
		} finally {
			releaseConnection(db);
		}

		String json = JSON.serialize(data);
		Gson gson = new Gson();
		Customer customer = gson.fromJson(json, Customer.class);
		return customer;
	}

	@GET
	@Path("id/sample")
	@Produces({ MediaType.APPLICATION_JSON })
	public Customer getSampleCustomer() {
		Customer customer = new Customer();
		customer.setId("sample");
		customer.setName("Mighty Pulpo");
		Address address = new Address();
		address.setCity("austin");
		address.setState("TX");
		address.setAddressType("home");
		customer.getAddresses().add(address);
		address = new Address();
		address.setCity("sterling");
		address.setState("VA");
		address.setAddressType("work");
		customer.getAddresses().add(address);
		return customer;
	}

	@POST
	@Consumes({ MediaType.APPLICATION_JSON })
	public Response saveCustomer(Customer customer, @Context UriInfo uriInfo) throws UnknownHostException {
		Gson gson = new Gson();
		String json = gson.toJson(customer);

		ObjectId id = new ObjectId();
		DBObject dbObject = (DBObject) JSON.parse(json);
		dbObject.put("_id", id);
		
		DB db = getConnection();
		try {
			db.getCollection("customer").insert(dbObject);
		} finally {
			releaseConnection(db);
		}

		URI uri = UriBuilder.fromUri(uriInfo.getBaseUri()).path("customer").path("id").path(id.toString()).build();
		return Response.created(uri).build();
	}

}
