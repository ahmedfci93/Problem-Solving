/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static PrintWriter out;
    public static void main(String[] args) {
        FastReader sc = new FastReader();
        out = new PrintWriter(new BufferedOutputStream(System.out), true);
        int t, n;
        t = sc.nextInt();
        while (t > 0) {
            n = sc.nextInt();
            String s = "";
            int[] cnt = new int[1000001];
            Set<Integer> in = new HashSet<>();
            for (int i = 0; i < n; i++) {
                int tmp;
                s = sc.next();
                tmp = sc.nextInt();
                if (s.equals("A")) {
                    if (!in.contains(tmp)) {
                        in.add(tmp);
                    }
                    cnt[tmp]++;
                }else {
                    if (cnt[tmp] > 0) {
                        cnt[tmp]--;
                        if (cnt[tmp] == 0) {
                            in.remove(tmp);
                        }
                    }
                }
                out.println(in.size());
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