import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
        int t, l, r;
        boolean [] prime;
        t = sc.nextInt();
        while (t > 0) {
            boolean done=false;
            l = sc.nextInt();
            r = sc.nextInt();
            prime =new boolean[r+1];
            Arrays.fill(prime, true);
            for(int i=2 ; i<=Math.sqrt(r);i++)
            {
                if(prime[i])
                {
                    for(int j=i*2 ; j<=r;j+=i)
                    {
                        prime[j]=false;
                    }
                }
            }
            for (int i = l; i <= r-6; i++) {
                if (prime[i]&& prime[i+6]) {
                    System.out.print(i+" "+(i+6)+" ");
                    done=true;
                }
            }
            if(!done)System.out.print("-1");
            System.out.println();
            t--;
        }
    }
}