import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static PrintWriter out;
    
    public static void main(String[] args) {
        FastReader sc = new FastReader();
        out = new PrintWriter(new BufferedOutputStream(System.out), true);
        int t,n,sum,m;
        t = sc.nextInt();
        while (t > 0) {
            n=sc.nextInt();
            int lst[]=new int[n];
            for (int i = 0; i < n; i++) {
                lst[i]=sc.nextInt();
            }
            for (int i = n-1; i <= 2*(n-1); i++) {
                System.out.print(lst[i%n]+" ");
            }
            System.out.println();
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