package jayray.net.orders;

import java.util.ArrayList;
import java.util.List;

public class CustomerDao {

	public Customer fetchCustomer(String id) {
		List<Customer> customers = loadCustomers();

		Customer match = null;
		for (Customer potentialMatch : customers) {
			if (potentialMatch.getId().matches(id)) {
				match = potentialMatch;
				break;
			}
		}
		return match;
	}

	private List<Customer> loadCustomers() {
		ArrayList<Customer> customers = new ArrayList<Customer>();
		Customer customer;
		Address address;

		customer = new Customer();
		customer.setId("1");
		customer.setName("Mighty Pulpo");
		address = new Address();
		address.setCity("Austin");
		address.setState("TX");
		address.setAddressType("home");
		customer.getAddresses().add(address);
		address = new Address();
		address.setCity("Sterling");
		address.setState("VA");
		address.setAddressType("work");
		customer.getAddresses().add(address);
		customers.add(customer);

		customer = new Customer();
		customer.setId("2");
		customer.setName("Bob Jones");
		address = new Address();
		address.setCity("San Antonio");
		address.setState("TX");
		address.setAddressType("home");
		customer.getAddresses().add(address);
		address = new Address();
		address.setCity("Reston");
		address.setState("VA");
		address.setAddressType("work");
		customer.getAddresses().add(address);
		customers.add(customer);

		customer = new Customer();
		customer.setId("3");
		customer.setName("Big Oil");
		address = new Address();
		address.setCity("Houston");
		address.setState("TX");
		address.setAddressType("home");
		customer.getAddresses().add(address);
		address = new Address();
		address.setCity("Ashburn");
		address.setState("VA");
		address.setAddressType("work");
		customer.getAddresses().add(address);
		customers.add(customer);

		return customers;
	}
}
