package codeforces;

import java.util.Scanner;
// contest: Codeforces Round #607 (Div. 2), problem: (A) Suffix Three
public class SuffixThree {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        byte t = sc.nextByte();
        while(t-- > 0){
            String s = sc.next();
            if(s.endsWith("po"))
                System.out.println("FILIPINO");
            else if(s.endsWith("desu") || s.endsWith("masu"))
                System.out.println("JAPANESE");
            else
                System.out.println("KOREAN");
        }
        sc.close();
    }
}