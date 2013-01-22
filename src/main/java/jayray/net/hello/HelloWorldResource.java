package jayray.net.hello;

import java.util.concurrent.TimeUnit;

import javax.ws.rs.GET;
import javax.ws.rs.Path;
import javax.ws.rs.Produces;
import javax.ws.rs.core.MediaType;

import com.yammer.metrics.Metrics;
import com.yammer.metrics.annotation.Metered;
import com.yammer.metrics.annotation.Timed;
import com.yammer.metrics.core.Counter;
import com.yammer.metrics.core.Gauge;
import com.yammer.metrics.reporting.ConsoleReporter;
import com.yammer.metrics.reporting.GraphiteReporter;

@Path("hello")
public class HelloWorldResource {
	private final Counter numberOfHellos = Metrics.newCounter(HelloWorldResource.class, "number-of-hello");

	{
		// by uncommenting the line below, the metrics are outputed to STDOUT
		// every second
		ConsoleReporter.enable(1, TimeUnit.SECONDS);

		// my hosted graphite api key = 6ab81206-e22d-4cb9-91df-9bfa276ea43e
		// remove this key from source once I get this working.
		GraphiteReporter.enable(1, TimeUnit.MINUTES, "carbon.hostedgraphite.com", 2003, "6ab81206-e22d-4cb9-91df-9bfa276ea43e");

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
