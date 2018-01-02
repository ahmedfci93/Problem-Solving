import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
        int t, s;
        long ans;
        t = sc.nextInt();
        while (t > 0) {
            ans=0;
            s = sc.nextInt();
            long side=s/3;
            if(s%3!=0)
            {
                int r=s%3;
                if(r==1)ans+=side*(side+1)*side;
                else ans+=side*(side+1)*(side+1);
            }else
            {
                ans+=side*side*side;
            }
            System.out.println(ans);
            t--;
        }
	}
}