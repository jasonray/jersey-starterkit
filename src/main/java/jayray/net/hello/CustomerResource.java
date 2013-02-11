package jayray.net.hello;

import javax.ws.rs.GET;
import javax.ws.rs.Path;
import javax.ws.rs.PathParam;
import javax.ws.rs.Produces;
import javax.ws.rs.core.MediaType;

@Path("customer")
public class CustomerResource {

	@GET
	// @Path("id/{id}")
	@Produces({ MediaType.APPLICATION_JSON, MediaType.APPLICATION_XML })
	public Customer getCustomer(@PathParam("id") String id) {
		Customer customer = new Customer();
		customer.setId(id);
		customer.setName("Mighty Pulpo");
		return customer;
	}
}