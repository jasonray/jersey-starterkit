package jayray.net.Orders;

import java.util.concurrent.TimeUnit;

import javax.ws.rs.GET;
import javax.ws.rs.Path;
import javax.ws.rs.PathParam;
import javax.ws.rs.Produces;
import javax.ws.rs.core.MediaType;

import com.yammer.metrics.Metrics;
import com.yammer.metrics.annotation.Timed;
import com.yammer.metrics.core.Timer;
import com.yammer.metrics.core.TimerContext;

@Path("customer")
public class CustomerResource {

	@GET
	@Path("id/{id}")
	@Produces({ MediaType.APPLICATION_JSON, MediaType.APPLICATION_XML })
	@Timed(name = "getCustomer")
	public Customer getCustomer(@PathParam("id") String id) {
		return customerDAL(id);
	}

	final Timer dalTimer = Metrics.newTimer(CustomerResource.class, "dal-timer", TimeUnit.MILLISECONDS, TimeUnit.SECONDS);

	// handle request
	public Customer customerDAL(String id) {
		final TimerContext context = dalTimer.time();
		try {
			Customer customer = new Customer();
			customer.setId(id);
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

			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				throw new RuntimeException(e);
			}

			return customer;
		} catch (Exception e) {
			throw new RuntimeException(e);
		} finally {
			context.stop();
		}

	}
}
