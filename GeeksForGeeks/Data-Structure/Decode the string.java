import java.io.*;
import java.util.*;

public class GFG {

    public static PrintWriter out;
    public static int vis[];
    public static int n;

    public static String reverse(Stack<String> st) {
        String ret = "";
        while (!st.empty()) {
            ret += st.pop();
        }
        return ret;
    }

    public static void main(String[] args) {
        //code
        FastReader sc = new FastReader();
        out = new PrintWriter(new BufferedOutputStream(System.out), true);
        int t;
        Stack<String> st, st2;
        String s, tmp, ans, num;
        t = sc.nextInt();
        while (t > 0) {
            s = sc.next();
            st = new Stack<String>();
            st2 = new Stack<String>();
            for (int i = 0; i < s.length(); i++) {
                if (s.charAt(i) == ']') {
                    ans = "";
                    while (!st.peek().equals("[")) {
                        st2.push((st.pop()));
                    }
                    st.pop();
                    tmp = reverse(st2);
                    while (!st.empty() && !st.peek().equals("[")
                            && !(st.peek().charAt(0) >= 'a' && st.peek().charAt(0) <= 'z')) {
                        st2.push((st.pop()));
                    }
                    num = reverse(st2);
                    int n = Integer.parseInt(num);
                    for (int j = 0; j < n; j++) {
                        ans += tmp;
                    }
                    st.push(ans);
                } else {
                    st.push(s.charAt(i) + "");
                }
            }
            out.println(st.pop());
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
