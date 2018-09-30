import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Stack;
import java.util.StringTokenizer;


public class GFG {
	public static PrintWriter out;

	public static void main(String[] args) {
		//code
		FastReader sc = new FastReader();
		out = new PrintWriter(new BufferedOutputStream(System.out), true);
		int t, x, y;
		Stack<Integer> st;
		String s;
		t = sc.nextInt();
		while (t > 0) {
			s = sc.next();
			st = new Stack<Integer>();
			for (int i = 0; i < s.length(); i++) {
				if (s.charAt(i) == '+') {
					x = st.pop();
					y = st.pop();
					st.push((x + y));
				} else if (s.charAt(i) == '*') {
					x = st.pop();
					y = st.pop();
					st.push((x * y));
				} else if (s.charAt(i) == '-') {
					x = st.pop();
					y = st.pop();
					st.push((y - x));
				} else if (s.charAt(i) == '/') {
					x = st.pop();
					y = st.pop();
					st.push((y / x));
				} else {
					st.push(Integer.parseInt(s.charAt(i) + ""));
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

