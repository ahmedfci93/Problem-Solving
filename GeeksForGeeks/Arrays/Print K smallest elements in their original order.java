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
            n = sc.nextInt();
            k = sc.nextInt();
            ArrayList<Integer> ans = new ArrayList<Integer>();
            int[] arr = new int[n];
            List<Integer> set = new ArrayList<Integer>();
            HashMap<Integer, ArrayList<Integer>> map = new HashMap<Integer, ArrayList<Integer>>();
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
                if(!set.contains(arr[i]))set.add(arr[i]);
                if (map.containsKey(arr[i])) {
                    map.get(arr[i]).add(i);
                } else {
                    ArrayList<Integer> lst = new ArrayList<Integer>();
                    lst.add(i);
                    map.put(arr[i], lst);
                }
            }
            int j = 0;
            Collections.sort(set);
            for (Integer x: set) {
                ArrayList<Integer> value = map.get(x);
                for (int i = 0; i < value.size() && j < k; i++, j++) {
                    ans.add(value.get(i));
                }
                if (j == k) {
                    break;
                }
            }
            Collections.sort(ans);
            for (int i = 0; i < ans.size(); i++) {
                out.print(arr[ans.get(i)] + " ");
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