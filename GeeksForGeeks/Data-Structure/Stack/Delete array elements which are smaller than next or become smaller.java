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
            Stack<Integer> st = new Stack<>();
            Stack<Integer> tmp = new Stack<>();
            n = sc.nextInt();
            ArrayList<Integer> arr=new ArrayList<Integer>();
            int j=n,d=0;
            while(j>0)
            {
                arr.add(sc.nextInt());
                j--;
            }
            k = sc.nextInt();
            for (int i = n-1; i >= 0; i--) {
                st.push(arr.get(i));
            }
            tmp.push(st.pop());
            while(!st.isEmpty() && k!=d){
                if(!tmp.isEmpty() && tmp.peek()<st.peek()){
                    tmp.pop();
                    d++;
                } else {
                    tmp.push(st.pop());
                }
            }
            while(!tmp.isEmpty()){
                st.push(tmp.pop());
            }
            while(!st.isEmpty()){
                out.print(st.pop()+" ");
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