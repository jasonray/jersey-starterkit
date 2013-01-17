package jayray.net;

import javax.ws.rs.GET;
import javax.ws.rs.Path;

@Path("hello")
public class HelloWorldResource {
	@GET
	public String sayhello() {
		return "hello";
	}
}
