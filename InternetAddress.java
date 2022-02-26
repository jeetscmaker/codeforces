import java.util.*;
// contest: CROC-MBTU 2012, Elimination Round (ACM-ICPC), problem: (B) Internet Address, Accepted
public class InternetAddress {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String s = sc.next();
		String result = "";
		int index = s.lastIndexOf("ru");
		if (s.startsWith("http")) {
			result += "http://";
			for(int i = 4; i <= index; i++) {
				result += s.charAt(i);
			}
		}
		else {
			result += "ftp://";
			for(int i = 3; i <= index; i++) {
				result += s.charAt(i);
			}
		}
		result += ".ru";
			if(index != s.length()-2) {
				result += "/";
				for (int i = index+2; i < s.length(); i++) {
					result += s.charAt(i);
				}
		}
		System.out.println(result);
		sc.close();
	}
}
