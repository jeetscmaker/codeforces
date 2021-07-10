import java.util.Scanner;

public class Bad_Triangle {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while (t-- > 0) {
			int n = sc.nextInt();
			long[] a = new long[n];
			for (int i = 0; i < n; i++)
				a[i] = sc.nextLong();
			long sum = a[0] + a[1];
			int index = 0;
			for (int k = 2; k < n; k++) {
				if (a[k] >= sum) {
					index = k;
					break;
				}
			}
			if (index == 0)
				System.out.println(-1);
			else
				System.out.println(1 + " " + 2 + " " + (index+1));
		}
		sc.close();
	}

}
