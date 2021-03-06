import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static PrintWriter out;
    
    public static void main(String[] args) {
        FastReader sc = new FastReader();
        out = new PrintWriter(new BufferedOutputStream(System.out), true);
        int t,n,arr[];
        t = sc.nextInt();
        while (t > 0) {
            n=sc.nextInt();
            arr=new int[n];
            int mn=Integer.MAX_VALUE,mn2=Integer.MAX_VALUE;
            for (int i = 0; i < n; i++) {
                arr[i]=sc.nextInt();
                mn=Math.min(mn, arr[i]);
            }
            for (int i = 0; i < n; i++) {
                if(mn!=arr[i])
                    mn2=Math.min(mn2, arr[i]);
            }
            if(mn2!=Integer.MAX_VALUE)
                System.out.println(mn+" "+mn2);
            else System.out.println("-1");
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