import java.util.*;

/** contest: Codeforces Round #731 (Div. 3), problem: (B) Alphabetical Strings
 * @author jeetscmaker
 */

public class AlphabeticalString {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		ArrayDeque<Character> a = new ArrayDeque<>();
		while (t-- > 0) {
			String s = sc.next();
			for (char c : s.toCharArray())
				a.add(c);
			int n = a.size();
			boolean isPossible = true;
			for (int i = 0; i < n; i++) {
				if (a.peekFirst() - 'a' == n - 1 - i)
					a.removeFirst();
				else if (a.peekLast() - 'a' == n - 1 - i)
					a.removeLast();
				else {
					isPossible = false;
					break;
				}
			}
			System.out.println(isPossible ? "YES" : "NO");
			a.clear();
		}
		sc.close();
	}
}