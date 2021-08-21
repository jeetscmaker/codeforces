package codeforces;

import java.util.*;

public class  CancelTheTrains{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0){
			int n,m;
			n = sc.nextInt();
			m = sc.nextInt();
			ArrayList<Integer> a = new ArrayList<>();
			for (int i=0; i<m+n; i++) {
				a.add(sc.nextInt());
			}
			Collections.sort(a);
			int count = 0;
			for (int i=0; i+1<m+n; i++) {
				int p = a.get(i);
				int q = a.get(i+1);
				if(p == q)
					count++;
			}
			System.out.println(count);
		}
		sc.close();
	}
}