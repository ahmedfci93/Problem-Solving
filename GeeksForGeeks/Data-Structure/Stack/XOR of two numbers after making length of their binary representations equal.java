import java.io.*;
import java.util.*;

public class GFG {

    public static PrintWriter out;

    public static void main(String[] args) {
        FastReader sc = new FastReader();
        out = new PrintWriter(new BufferedOutputStream(System.out), true);
        int t, n, k;
        t = sc.nextInt();
        while (t > 0) {
            Stack<Integer> st = new Stack<>();
            Stack<Integer> st2 = new Stack<>();
            int x, y;
            x = sc.nextInt();
            y = sc.nextInt();
            int mx = Math.max(x, y);
            while (mx != 0) {
                if (x != 0) {
                    st.push(x & 1);
                }
                if (y != 0) {
                    st2.push(y & 1);
                }
                x >>= 1;
                y >>= 1;
                mx >>= 1;
            }
            mx = Math.max(st.size(), st2.size());
            int bin = 1;
            Stack<Integer> ans = new Stack<>();
            for (int i = 0; i < mx; i++) {
                if (!st.empty() && !st2.empty()) {
                    ans.push(st.pop() ^ st2.pop());
                } else if (st.empty()) {
                    ans.push(st2.pop() ^ 0);
                } else if (st2.empty()) {
                    ans.push(st.pop() ^ 0);
                }
            }
            int z = 0;
            mx = ans.size();
            for (int i = 0; i < mx; i++) {
                z += ans.pop() * bin;
                bin *= 2;
            }
            out.println(z);
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
