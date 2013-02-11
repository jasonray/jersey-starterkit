package jayray.net.hello;

import javax.xml.bind.annotation.XmlRootElement;

import jayray.net.orders.Namespaces;

@XmlRootElement(namespace = Namespaces.OrdersNamespace)
public class Customer {
	private String id;
	private String name;

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

}