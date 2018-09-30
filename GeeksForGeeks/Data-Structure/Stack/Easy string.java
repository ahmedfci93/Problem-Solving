import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Stack;
import java.util.StringTokenizer;

public class GFG {
	public static PrintWriter out;
	public static int vis[];
	public static int n;

	public static void main(String[] args) {
		//code
		FastReader sc = new FastReader();
		out = new PrintWriter(new BufferedOutputStream(System.out), true);
		int t, q;
		Stack<String> st;
		String s;
		t = sc.nextInt();
		while (t > 0) {
			st = new Stack<String>();
			s = sc.next().toLowerCase();
			int sz = 0;
			for (int i = 0; i < s.length(); i++) {
				if (st.empty()) {
					st.push(s.charAt(i) + "");
				} else {
					if (!st.peek().equals(s.charAt(i) + "")) {
						out.print(st.size() + st.peek());
						st.clear();
						st.push(s.charAt(i) + "");
					} else {
						st.push(s.charAt(i) + "");
					}
				}
			}
			out.println(st.size() + st.peek());
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

