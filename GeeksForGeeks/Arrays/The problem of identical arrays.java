import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
        int t,n;
        t = sc.nextInt();
        while (t > 0) {
            n = sc.nextInt();
            int a1,a2,tmp;
            a1=a2=0;
            for (int i = 0; i < n; i++) {
                tmp = sc.nextInt();
                a1+=tmp;
            }
            for (int i = 0; i < n; i++) {
                tmp = sc.nextInt();
                a2+=tmp;
            }
            if(a1==a2)System.out.println("1");
            else System.out.println("0");
            t--;
        }
	}
}