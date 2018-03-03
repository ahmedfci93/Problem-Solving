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
		int t, n, k, troops, ans;
		t = sc.nextInt();
		while (t-- > 0) {
			troops = ans = 0;
			n = sc.nextInt();
			k = sc.nextInt();
			int a[];
			int tmp[];
			a = new int[n];
			tmp = new int[n];
			for (int j = 0; j < n; j++) {
				a[j] = sc.nextInt();
				if (a[j] % k == 0)
					troops++;
			}
			int mn = (int) Math.ceil((double) n / 2);
			for (int i = 0; i < n; i++) {
				tmp[i] = k - (a[i] % k);
			}
			Arrays.sort(tmp);
			for (int i = 0; i < n && mn > troops; i++, troops++) {
				ans += tmp[i];
			}
			out.println(ans);
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