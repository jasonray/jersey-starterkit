package jayray.net.hello;

import javax.xml.bind.annotation.XmlAttribute;
import javax.xml.bind.annotation.XmlRootElement;

@XmlRootElement
public class Saying {
	@XmlAttribute
	private long id;
	@XmlAttribute
	private String content;

	public Saying(long id, String content) {
		this.id = id;
		this.content = content;
	}

	public Saying() {
		this.content = null;
	}

	public long getId() {
		return id;
	}

	public String getContent() {
		return content;
	}
}