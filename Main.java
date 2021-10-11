import java.util.*;
import java.util.Map.Entry;

// @author jeetscmaker
// contest: Codeforces Round #686 (Div. 3), problem: (B) Unique Bid Auction

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		TreeMap<Integer, Integer> map = new TreeMap<>();
		while (t-- > 0) {
			int n = sc.nextInt();
			int[] a = new int[n];
			for (int i = 0; i < n; i++) {
				a[i] = sc.nextInt();
				if (map.containsKey(a[i])) {
					map.put(a[i], map.get(a[i]) + 1);
				} else {
					map.put(a[i], 1);
				}
			}
			boolean isAvailable = false;
			int key = -1;
			for (Entry<Integer, Integer> entry : map.entrySet()) {
				if (entry.getValue() == 1) {
					isAvailable = true;
					key = entry.getKey();
					break;
				}
			}
			int index = 0;
			if (isAvailable) {
				for (int i = 0; i < n; i++) {
					if (a[i] == key) {
						index = i + 1;
						break;
					}
				}
				System.out.println(index);
			} else {
				System.out.println(-1);
			}
			map.clear();
		}
		sc.close();
	}
}