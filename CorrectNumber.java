import java.util.Arrays;
import java.util.Scanner;
/**
 * Codeforces Beta Round #12 (Div 2 Only), problem: (B) Correct Solution
 * @author Jeetscmaker
 * */
public class CorrectNumber {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String s = sc.next();
		String t = sc.next();
		if (s.length() == 1 && t.length() == 1) {
			if (s.equals(t))
				System.out.println("OK");
			else
				System.out.println("WRONG_ANSWER");
			sc.close();
			return;
		}
		if (s.length() != t.length()) {
			System.out.println("WRONG_ANSWER");
			sc.close();
			return;
		}
		int zeros = 0;
		char[] a = s.toCharArray();
		Arrays.sort(a);
		for (char c : a)
			if (c == '0')
				zeros++;
		String ans = "" + a[zeros];
		for (int i = 0; i < zeros; i++)
			ans += '0';
		for (int i = zeros + 1; i < a.length; i++)
			ans += a[i];
		if (t.equals(ans))
			System.out.println("OK");
		else
			System.out.println("WRONG_ANSWER");
		sc.close();
	}
}
