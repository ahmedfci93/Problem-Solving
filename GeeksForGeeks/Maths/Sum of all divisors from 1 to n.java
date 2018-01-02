import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
        int t, n;
        long ans;
        t = sc.nextInt();
        while (t > 0) {
            n = sc.nextInt();
            ans = 0;
            int cnt[] = new int[n + 1];
            for (int i = 1; i <= n; i++) {
                for (int j = i; j <= n; j += i) {
                    cnt[j] += i;
                }
            }
            for (int i = 1; i <= n; i++) {
                ans += cnt[i];
            }
            System.out.println(ans);
            t--;
        }
	}
}