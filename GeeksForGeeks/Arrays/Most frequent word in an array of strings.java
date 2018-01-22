/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	
    public static PrintWriter out;
    static class input implements Comparable<input> {
        String s;
        int cnt;

        public input() {
            this.cnt = 0;
        }
        @Override
        public boolean equals(Object obj) {
           if(this.s.equals(((input)obj).s))
           {
               ((input)obj).cnt++;
               return true;
           }
            return false;        
        }
        @Override
        public int compareTo(input x) {
            if(this.cnt> x.cnt)return -1;
            if(this.cnt< x.cnt)return 1;
            return this.s.compareTo(x.s);
        }
    }
    
    public static void main(String[] args) {
        FastReader sc = new FastReader();
        out = new PrintWriter(new BufferedOutputStream(System.out), true);
        int t, n;
        t = sc.nextInt();
        while (t > 0) {
            n = sc.nextInt();
            ArrayList<input> in=new ArrayList<>();
            for (int i = 0; i < n; i++) {
                input tmp=new input();
                tmp.s=sc.next();
                if(!in.contains(tmp))
                {
                    in.add(tmp);
                }
            }
            Collections.sort(in);
            out.println(in.remove(0).s);
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