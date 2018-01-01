import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
        int t,n,a,b,x;
        t = sc.nextInt();
        while (t > 0) {
            a=sc.nextInt();
            b=sc.nextInt();
            n=sc.nextInt();
            boolean f=false;
            for (int i = 1; i <= n/2; i++) {
                x=(n-b*i)/a;
                if(a*x+b*i==n&&x>0)
                {
                    System.out.println(x+" "+i);
                    f=true;
                    break;
                }
            }
            if(!f)System.out.println("No solution");
            t--;
        }
	}
}