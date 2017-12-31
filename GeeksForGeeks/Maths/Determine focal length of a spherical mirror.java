import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
        int t;
        double n;
        String type="";
        t = sc.nextInt();
        while (t > 0) {
            type=sc.next();
            n = sc.nextDouble();
            n/=2;
            if(type.equals("convex"))
            {
                n=Math.ceil(n);
                n*=-1;
            }else n=Math.floor(n);
            System.out.println((int)n);
            t--;
        }
	}
}