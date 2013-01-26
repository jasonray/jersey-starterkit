package jayray.net.orders2;

import java.util.ArrayList;
import java.util.List;

import javax.xml.bind.annotation.XmlElement;
import javax.xml.bind.annotation.XmlRootElement;

@XmlRootElement()
public class Customer {
	private String id;
	private String name;
	private List<Address> addresses = new ArrayList<Address>();

	public String getId() {
		return id;
	}

	public void setId(String id) {
		this.id = id;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	@XmlElement(name="address")
	public List<Address> getAddresses() {
		return addresses;
	}

	public void setAddresses(List<Address> address) {
		this.addresses = address;
	}
}
