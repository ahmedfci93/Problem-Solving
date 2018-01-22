/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static PrintWriter out;

    public static void main(String[] args) {
        FastReader sc = new FastReader();
        out = new PrintWriter(new BufferedOutputStream(System.out), true);
        int t, n,d;
        t = sc.nextInt();
        int mod=1000000007;
        while (t > 0) {
            n = sc.nextInt();
            d = sc.nextInt();
            int cars[]=new int[n];
            int p[]=new int[n];
            for (int i = 0; i < n; i++) {
                cars[i]=sc.nextInt();
            }
            for (int i = 0; i < n; i++) {
                p[i]=sc.nextInt();
            }
            int sum=0;
            for (int i = 0; i < n; i++) {
                if((d&1)==1&&cars[i]%2==0)
                {
                    sum+=p[i];
                }else if((d&1)==0&&cars[i]%2==1)
                {
                    sum+=p[i];
                }
            }
            out.println(sum);
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