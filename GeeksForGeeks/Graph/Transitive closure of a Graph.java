import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static PrintWriter out;
    public static int graph[][],ans[][];
    public static boolean vis[];
    
    public static void solve(int st,int s,int e)
    {
        if(vis[s])return;
        vis[s]=true;
        for (int i = 0; i <e ; i++) {
            if(graph[s][i]==1)
            {
                ans[st][i]=1;
                solve(st,i,e);
            }
        }
        vis[s]=false;
    }
    
    public static void main(String[] args) {
        FastReader sc = new FastReader();
        out = new PrintWriter(new BufferedOutputStream(System.out), true);
        int t, e;
        t = sc.nextInt();
        while (t > 0) {
            e = sc.nextInt();
            vis = new boolean[e];
            graph=new int[e][e];
            ans=new int[e][e];
            for (int i = 0; i < e; i++) {
                for (int j = 0; j < e; j++) {
                    int n=sc.nextInt();
                    graph[i][j]=n;
                    ans[i][j]=n;
                }
            }
            for (int i = 0; i < e; i++) 
                solve(i,i,e);
            for (int i = 0; i < e; i++)
                for (int j = 0; j < e; j++) {
                    System.out.print(ans[i][j]+" ");
                }
            System.out.println();
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