import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static PrintWriter out;

    public static void main(String[] args) {
        FastReader sc = new FastReader();
        out = new PrintWriter(new BufferedOutputStream(System.out), true);
        int t, n;
        int tab[] = new int[10001];
        t = sc.nextInt();
        while (t > 0) {
            n = sc.nextInt();
            boolean end = false;
            int ans = 0;
            Arrays.fill(tab, 0);
            Set<Integer> lst = new HashSet<Integer>();
            for (int i = 0; i < n; i++) {
                String num = sc.next();
                if (num.equals("END")) {
                    end = true;
                    Arrays.fill(tab, 0);
                } else {
                    int j = Integer.parseInt(num);
                    lst.add(j);
                    tab[j]++;
                }
            }
            for (Integer i : lst) {
                if ((tab[i] & 1) == 1) {
                    ans++;
                }
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