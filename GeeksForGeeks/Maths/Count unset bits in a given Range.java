import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
        int t, l, r, n;
        int ans = 0;
        t = sc.nextInt();
        while (t > 0) {
            ans = 0;
            n = sc.nextInt();
            l = sc.nextInt();
            r = sc.nextInt();
            for (int i = 1; i <= r; i++) {
                if (i >= l && i <= r) {
                    if ((n & 1) == 0) {
                        ans++;
                    }
                } else if (i > r) {
                    break;
                }
                n = n >> 1;
            }
            System.out.println(ans);
            t--;
        }
	}
}