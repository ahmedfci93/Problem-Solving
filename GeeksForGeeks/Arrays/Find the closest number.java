/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static PrintWriter out;

    public static void main(String[] args) {
        FastReader sc = new FastReader();
        out = new PrintWriter(new BufferedOutputStream(System.out), true);
        int t, n,k;
        t = sc.nextInt();
        while (t > 0) {
            n = sc.nextInt();
            k = sc.nextInt();
            int[] in = new int[n];
            for (int i = 0; i < n; i++) {
                in[i]=sc.nextInt();
            }
            int l,h,m;
            l=0;
            h=n-1;
            int ans=0;
            while(l<=h)
            {
                m=l+(h-l)/2;
                if(in[m]<=k)
                {
                    ans=m;
                    l=m+1;
                }else
                {
                    h=m-1;
                }
            }
            if(l==0)out.println(in[0]);
            else if(ans+1!=n&&k-in[ans]>=in[ans+1]-k)out.println(in[ans+1]);
            else out.println(in[ans]);
            t--;
        }
        out.close();
    }

    static class FastReader {

        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }

        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        long nextLong() {
            return Long.parseLong(next());
        }

        double nextDouble() {
            return Double.parseDouble(next());
        }

        String nextLine() {
            String str = "";
            try {
                str = br.readLine();
            } catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }
}