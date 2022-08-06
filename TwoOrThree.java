import java.util.*;

public class TwoOrThree {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0) {
			int n = sc.nextInt();
			if(n == 1) {
				System.out.println(2);
				continue;
			}
			if(n%3 == 0)
				System.out.println(n/3);
			else 
				System.out.println(n/3 + 1);
		}
		sc.close();
	}
}