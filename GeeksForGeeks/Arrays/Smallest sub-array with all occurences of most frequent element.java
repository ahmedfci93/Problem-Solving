import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
        int t, n;
        t = sc.nextInt();
        while (t > 0) {
            n = sc.nextInt();
            int cnt[] = new int[10001];
            int lst[] = new int[10001];
            int fst[] = new int[10001];
            int arr[] = new int[n];
            int a = 0, mx = 0;
            Arrays.fill(fst, -1);
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
                cnt[arr[i]]++;
                lst[arr[i]] = i;
                if(fst[arr[i]]==-1)fst[arr[i]] = i;
                mx = Math.max(mx, cnt[arr[i]]);
            }
            int st, end;
            st = 0;
            end = n;
            if (mx == 1) {
                end=0;
            } else {
                for (int i = 0; i < n; i++) {
                    if (mx == cnt[arr[i]]) {
                        if (lst[arr[i]] - fst[arr[i]] < end - st) {
                            st = fst[arr[i]];
                            end = lst[arr[i]];
                        }
                    }
                }
            }
            for (int i = st; i <= end; i++) {
                System.out.print(arr[i]+" ");
            }
            System.out.println();
            t--;
        }
	}
}