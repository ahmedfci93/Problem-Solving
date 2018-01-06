import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    public static PrintWriter out;
    public static int vis[];
    public static int n;

    public static int solve(int i) {
        if (n < i) {
            return Integer.MAX_VALUE;
        }
        if (n == i) {
            return 1;
        }
        if (vis[i] != -1) {
            return vis[i];
        }
        int r = solve(i + 1);
        int l = solve(i * 3);
        int mn = Math.min(r, l);
        vis[i] = mn+1;
        return vis[i];
    }

    public static void main(String[] args) {
        //code
        FastReader sc = new FastReader();
        out = new PrintWriter(new BufferedOutputStream(System.out), true);
        int t, e;
        t = sc.nextInt();
        while (t > 0) {
            n = sc.nextInt();
            vis = new int[n+1];
            Arrays.fill(vis, -1);
            int ans = solve(1);
            out.println(ans-1);
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