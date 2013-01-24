package jayray.net.hello;

import javax.ws.rs.GET;
import javax.ws.rs.Path;
import javax.ws.rs.Produces;
import javax.ws.rs.QueryParam;

import com.wordnik.swagger.annotations.Api;
import com.wordnik.swagger.annotations.ApiOperation;

@Path("echo")
@Api(value = "/echo", description = "what did you say?")
public class EchoResource {

	@GET
	@Produces("text/plain")
	@ApiOperation(value = "echo", notes = "Add extra notes here", responseClass = "java.lang.String")
	public String echo(@QueryParam("m") String message) {
		return "echo: " + message;
	}
}
