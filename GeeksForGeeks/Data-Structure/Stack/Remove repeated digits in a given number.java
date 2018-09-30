/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static PrintWriter out;
    public static void main(String[] args) {
        FastReader sc = new FastReader();
        out = new PrintWriter(new BufferedOutputStream(System.out), true);
        String n;
        int l,t;
        t= sc.nextInt();
        while (t>0) {
        n = sc.next();
        Stack stack = new Stack();
        l = n.length();
        stack.push(n.charAt(0));
        String ans =""+ n.charAt(0);
        for (int i = 1; i < l; i++) {
            if(!stack.peek().equals(n.charAt(i))){
                stack.push(n.charAt(i));
                ans+=n.charAt(i);
            }
        }
        out.println(ans);            
        t--;   
        }
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