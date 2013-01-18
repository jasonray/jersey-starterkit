package jayray.net;

import javax.ws.rs.GET;
import javax.ws.rs.Path;
import javax.ws.rs.QueryParam;

import com.wordnik.swagger.annotations.Api;
import com.wordnik.swagger.annotations.ApiOperation;
import com.wordnik.swagger.annotations.ApiParam;

@Path("hello")
@Api(value = "/hello", description = "say hello")
public class HelloWorldResource {
	@GET
	@ApiOperation(value = "say hello", notes = "Add extra notes here", responseClass = "java.lang.String")
	public String sayhello() {
		return "hello";
	}

	@GET
	@ApiOperation(value = "echo", notes = "Add extra notes here", responseClass = "java.lang.String")
	@Path("echo")
	public String echo(@ApiParam(value = "message to be echo", required = true) @QueryParam("message") String message) {
		return "echo: " + message;
	}
}
