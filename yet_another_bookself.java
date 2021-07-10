import java.util.Scanner;

// contest: Codeforces Round #677 (Div. 3), problem: (B) Yet Another Bookshelf
public class Solution {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while (t-- > 0) {
			short n = sc.nextShort();
			byte[] a = new byte[n];
			for (short i = 0; i < n; i++)
				a[i] = sc.nextByte();
			short count = 0;
			int l = 0, r = l + 1;
			while (r < n) {
				if (a[l] == 1) {
					if (a[r] == 1) {
						count += (r - l - 1);
						l = r;
						r = l + 1;
					} else {
						r++;
					}
				} else {
					l++;
					r++;
				}
			}
			System.out.println(count);
		}
		sc.close();
	}

}
