import java.util.*;

/**
	 @author: jeetscmaker, 
	 contest: Codeforces Round #546 (Div. 2), problem: (A) Nastya Is Reading a Book, Accepted
*/

public class Nastya {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		Map<Integer, Integer> map = new LinkedHashMap<>();
		for(int i = 1; i <= n; i++) {
			int l = sc.nextInt();
			int r = sc.nextInt();
			map.put(l,r);
		}
		int k = sc.nextInt();
		int result = 0, i = 0;
		for(Map.Entry<Integer, Integer> entry : map.entrySet()) {
		    i++;
			if(entry.getKey() <= k && k <= entry.getValue()) {
				result++;
				break;
			}
		}
		result += (n-i);
		System.out.println(result);
		sc.close();
	}
}