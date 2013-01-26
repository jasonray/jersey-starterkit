package jayray.net.hello;

import javax.ws.rs.GET;
import javax.ws.rs.Path;
import javax.ws.rs.Produces;
import javax.ws.rs.core.MediaType;

/**
 * Resource level javadoc
 */
@Path("hello")
public class HelloWorldResource {
	/**
	 * Method level javadoc
	 * Sometimes the internet is lonely.  This resource will say hello.
	 * @return a simple greeting
	 */
	@GET
	@Produces(MediaType.TEXT_PLAIN)
	public String sayhello() {
		return "hello";
	}

}
