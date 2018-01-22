/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	
    public static PrintWriter out;

    public static void main(String[] args) {
        FastReader sc = new FastReader();
        out = new PrintWriter(new BufferedOutputStream(System.out), true);
        int t, n, k;
        t = sc.nextInt();
        while (t > 0) {
            int cnt[] = new int[10001];
            k = sc.nextInt();
            n = sc.nextInt();
            Set<Integer> set = new HashSet<>();
            for (int i = 0; i <k; i++) {
                int x = sc.nextInt();
                cnt[x]++;
                set.add(x);
            }
            for (Integer i : set) {
                if (cnt[i] == 1) {
                    out.println(i);
                    break;
                }
            }
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