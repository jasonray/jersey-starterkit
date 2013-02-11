package jayray.net.hello;

import javax.xml.bind.annotation.XmlAttribute;
import javax.xml.bind.annotation.XmlRootElement;

@XmlRootElement
public class Saying {
	@XmlAttribute
	private final long id;
	@XmlAttribute
	private final String content;

	public Saying(long id, String content) {
		this.id = id;
		this.content = content;
	}

	public long getId() {
		return id;
	}

	public String getContent() {
		return content;
	}
}