import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
        int t;
        String s="";
        t = sc.nextInt();
        while (t > 0) {
            s=sc.next();
            int l,r;
            l=r=0;
            int sz=s.length();
            for (int i = 0,j=sz-1; i < sz/2; i++,j--) {
                l+=s.charAt(i)-'0';
                r+=s.charAt(j)-'0';
            }
            if(l==r)System.out.println("1");
            else System.out.println("0");
            t--;
        }
	}
}