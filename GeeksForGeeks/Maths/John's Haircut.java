import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    public static void main (String[] args) {
        //code
        Scanner sc = new Scanner(System.in);
        long t, x,n;
        long time;
        double ans = 0;
        t = sc.nextLong();
        while (t > 0) {
            ans = 0;
            n = sc.nextLong();
            x = sc.nextLong();
            time=0;
            for (int i = 0; i < x; i++) {
                    time+=sc.nextLong();
            }
            double d=(time/(double)x);
            ans=n*d;
            System.out.println((long)ans);
            t--;
        }
    }
}