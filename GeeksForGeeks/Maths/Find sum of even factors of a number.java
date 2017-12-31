import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
        int t, n, arr[];
        t = sc.nextInt();
        int ans = 0;
        while (t > 0) {
            ans = 0;
            n = sc.nextInt();
            if(n%2==0)
                for(int i=2;i<=n;i+=2)
                {
                    if(n%i==0)ans+=i;
                }
            System.out.println(ans);
            t--;
        }
	}
}