package codeforces;

import java.util.Scanner;

/**
 * @author jeetscmaker
 * contest: Codeforces Round #726 (Div. 2), problem: (A) Arithmetic Array
 */
public class C {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            short n = sc.nextShort();
            int[] a = new int[n];
            int sum = 0;
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
                sum += a[i];
            }
            if (sum == n)
                System.out.println(0);
            else if (sum < n)
                System.out.println(1);
            else {
                System.out.println(sum - n);
            }
        }
        sc.close();
    }
}