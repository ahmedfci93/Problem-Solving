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
            int lst[] = new int[n];
            ArrayList<Integer> even = new ArrayList<Integer>();
            ArrayList<Integer> odd = new ArrayList<Integer>();
            for (int i = 0; i < n; i++) {
                lst[i] = sc.nextInt();
            }
            Arrays.sort(lst);
            for (int i = 0; i < n; i++) {
                if ((i & 1) == 1) {
                    odd.add(lst[i]);
                } else {
                    even.add(lst[i]);
                }
            }
            for (int i = even.size() - 1; i > -1; i--) {
                out.print(even.get(i) + " ");
            }
            for (int i = 0; i < odd.size(); i++) {
                out.print(odd.get(i) + " ");
            }
            out.println();
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