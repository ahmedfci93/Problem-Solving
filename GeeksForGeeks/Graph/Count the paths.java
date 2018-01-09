import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static PrintWriter out;
    public static HashMap<Integer,ArrayList<Integer>> graph;
    public static boolean vis[];
    public static int count(int s,int d)
    {
        if(s==d)return 1;
        if(vis[s])return 0;
        int ret=0;
        vis[s]=true;
        List<Integer> lst=graph.get(s);
        int sz=0;
        if(lst!=null)sz=lst.size();
        for (int i = 0; i < sz; i++) {
            ret+=count(lst.get(i),d);
        }
        vis[s]=false;
        return ret;
    }
    public static void main(String[] args) {
        FastReader sc = new FastReader();
        out = new PrintWriter(new BufferedOutputStream(System.out), true);
        int t, v,e,s,d,ans;
        t = sc.nextInt();
        while (t > 0) {
            ans=0;
            v = sc.nextInt();
            e = sc.nextInt();
            vis=new boolean[v];
            graph=new HashMap<Integer,ArrayList<Integer>>(v);
            for (int i = 0; i < e; i++) {
                int st= sc.nextInt();
                int ed= sc.nextInt();
                if(!graph.containsKey(st))
                {
                    graph.put(st,new ArrayList<Integer>());
                }
                graph.get(st).add(ed);
            }
            s = sc.nextInt();
            d = sc.nextInt();
            out.println(count(s, d));
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