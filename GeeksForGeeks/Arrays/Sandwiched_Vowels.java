/*package whatever //don not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static PrintWriter out;

    public static void main(String[] args) {
        FastReader sc = new FastReader();
        out = new PrintWriter(new BufferedOutputStream(System.out), true);
        int t;
        t = sc.nextInt();
        String vowals="aioue";
        String s="";
        while (t > 0) {
            s = sc.next();
            ArrayList<Integer>ans=new ArrayList<Integer>();
            for (int i = 1; i <= s.length()-2; i++) {
                if(vowals.indexOf(s.charAt(i))!=-1)
                {
                    if(vowals.indexOf(s.charAt(i-1))==-1&&vowals.indexOf(s.charAt(i+1))==-1)
                    {
                        ans.add(i);
                    }
                }
            }
            for (int i = 0; i < s.length(); i++) {
                if(!ans.contains(i))out.print(s.charAt(i));
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