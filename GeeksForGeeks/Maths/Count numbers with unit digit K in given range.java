import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    public static int calc(int num, int k) {
        int ret = 0;
        if (num % 10 >= k) {
            ret++;
        }
        num /= 10;
        int pow = 1;
        while (num != 0) {
            ret += (num % 10) * pow;
            pow *= 10;
            num /= 10;
        }
        return ret;
    }
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
        int t, k, l, h;
        t = sc.nextInt();
        while (t > 0) {
            int ans = 0;
            l = sc.nextInt();
            h = sc.nextInt();
            k = sc.nextInt();
            if(l%10<=k)
            {
                l-=l%10;
                if(k==0)l--;
            }
            ans+=calc(h, k)-calc(l, k);
            System.out.println(ans);
            t--;
        }
	}
}