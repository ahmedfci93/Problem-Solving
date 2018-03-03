/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static PrintWriter out;

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		FastReader sc = new FastReader();
		out = new PrintWriter(new BufferedOutputStream(System.out), true);
		int t, n, c1, c2;
		t = sc.nextInt();
		while (t-- > 0) {
			c1 = c2 = 0;
			n = sc.nextInt();
			int a[] = new int[n];
			int b[] = new int[n];
			for (int j = 0; j < n; j++) {
				a[j] = sc.nextInt();
			}
			for (int j = 0; j < n; j++) {
				b[j] = sc.nextInt();
			}
			for (int j = 0; j < n; j++) {

				if (a[j] > b[j])
					c1++;
				else if (a[j] < b[j])
					c2++;
			}
			out.print(c1 + " " + c2 + " ");
			if (c1 > c2)
				out.println("A");
			else if (c1 < c2)
				out.println("B");
			else
				out.println("DRAW");
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