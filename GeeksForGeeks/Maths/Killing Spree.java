import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
        int t;
        long p;
        t = sc.nextInt();
        while (t > 0) {
            p = sc.nextLong();
            long low = 0;
            long high = 1000000;
            long ans = 0;
            while (low <= high) {
                long mid = low + (high - low) / 2;
                long calc= (mid*(mid+1)*(2*mid+1))/6;
                if (calc>p) {
                    high = mid - 1;
                } else {
                    ans = mid;
                    low = mid + 1;
                }
            }
            System.out.println(ans);
            t--;
        }
	}
}