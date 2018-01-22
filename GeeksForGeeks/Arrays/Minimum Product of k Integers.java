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
        int mod=1000000007;
        while (t > 0) {
            n = sc.nextInt();
            int in[]=new int[n];
            for (int i = 0; i < n; i++) {
                in[i]=sc.nextInt();
            }
            k = sc.nextInt();
            Arrays.sort(in);
            long ans=1;
            for (int i = 0; i < k; i++) {
                ans=(ans*in[i])%mod;
            }
            out.println(ans);
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