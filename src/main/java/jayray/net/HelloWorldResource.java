package jayray.net;

import javax.ws.rs.GET;
import javax.ws.rs.Path;
import javax.ws.rs.QueryParam;

@Path("hello")
public class HelloWorldResource {
	@GET
	@Produces(Mediatype.plaintext)
	public String sayhello() {
		return "hello";
	}

	@GET
	@Path("echo")
	public String echo(@QueryParam("message") String message) {
		return "echo: " + message;
	}
}
