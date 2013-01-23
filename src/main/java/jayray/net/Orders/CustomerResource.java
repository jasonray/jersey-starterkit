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
	@Timed(name = "customer.restendpoint.timer")
	public Customer getCustomer(@PathParam("id") String id) {

		final Timer manualTimer = Metrics.newTimer(CustomerResource.class, "customer.restendpoint.timer-manual", TimeUnit.MILLISECONDS, TimeUnit.SECONDS);
		TimerContext context = manualTimer.time();
		// some action
		context.stop();

		return customerDAL(id);
	}

	// handle request
	private Customer customerDAL(String id) {
		final Timer manualTimer4 = Metrics.newTimer(CustomerResource.class, "customer.dal.timer", TimeUnit.MILLISECONDS, TimeUnit.SECONDS);
		TimerContext context4 = manualTimer4.time();

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
		}

		context4.stop();

		return customer;
	}

}
