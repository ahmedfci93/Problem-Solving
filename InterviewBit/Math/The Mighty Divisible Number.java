import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;

class GFG {
    public static int GCD(int a,int b)
    {
        if(a==0)return b;
        return GCD(b%a,a);
    }
    public static int LCM(int a,int b)
    {
        return a*(b/GCD(a,b));
    }
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
        int t, x, y, z, n;
        long ans;
        t = sc.nextInt();
        while (t > 0) {
            x = sc.nextInt();
            y = sc.nextInt();
            z = sc.nextInt();
            n = sc.nextInt();
            long pow=1;
            for (int i = 2; i <= n; i++) {
                pow*=10;
            }
            int cm=LCM(LCM(x, y),z);
            int r= (int) (pow%cm);
            if (r == 0) {
                ans = pow;
            } else {
                ans = pow + (long) (cm - r);
            }
            if(Long.toString(ans).length()!=n)System.out.println("-1");
            else System.out.println(ans);
            t--;
        }
	}
}