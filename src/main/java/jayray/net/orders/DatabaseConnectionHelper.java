package jayray.net.orders;

import java.net.UnknownHostException;

import com.mongodb.DB;
import com.mongodb.Mongo;

public class DatabaseConnectionHelper {
	public static DB getConnection() {
		Mongo m;
		try {
			m = new Mongo();
		} catch (UnknownHostException e) {
			throw new RuntimeException(e);
		}
		return m.getDB("test");
	}

	public static void releaseConnection(DB db) {
		db.getMongo().close();
	}

}
