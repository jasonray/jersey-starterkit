package jayray.net.hello;

import javax.ws.rs.GET;
import javax.ws.rs.Path;
import javax.ws.rs.Produces;
import javax.ws.rs.core.MediaType;

import com.yammer.metrics.Metrics;
import com.yammer.metrics.annotation.Metered;
import com.yammer.metrics.annotation.Timed;
import com.yammer.metrics.core.Counter;
import com.yammer.metrics.core.Gauge;

@Path("hello")
public class HelloWorldResource {
	private final Counter numberOfHellos = Metrics.newCounter(HelloWorldResource.class, "number-of-hello");

	{
		// by uncommenting the line below, the metrics are outputed to STDOUT
		// every second
		// ConsoleReporter.enable(1, TimeUnit.SECONDS);

		Metrics.newGauge(HelloWorldResource.class, "sample-gauge", new Gauge<Integer>() {
			@Override
			public Integer value() {
				return 5;
			}
		});
	}
	
	@GET
	@Timed(name = "sayHello-timer")
	@Metered(name = "sayHello-meter")
	@Produces(MediaType.TEXT_PLAIN)
	public String sayhello() {
		numberOfHellos.inc();
		return "hello";
	}

}
