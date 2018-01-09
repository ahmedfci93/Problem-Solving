
    public static PrintWriter out;
    public static int graph[][],n,m;
    public static boolean vis[][];
    
    public static void solve(int x,int y,int k,int val)
    {
        if(x==n||y==m||y<0||x<0)return;
        if(vis[x][y])return;
        if(val!=graph[x][y])return;
        graph[x][y]=k;
        vis[x][y]=true;
        solve(x+1,y,k,val);
        solve(x-1,y,k,val);
        solve(x,y+1,k,val);
        solve(x,y-1,k,val);
    }
    
    public static void main(String[] args) {
        FastReader sc = new FastReader();
        out = new PrintWriter(new BufferedOutputStream(System.out), true);
        int t, x,y,k;
        t = sc.nextInt();
        while (t > 0) {
            n = sc.nextInt();
            m = sc.nextInt();
            graph=new int[n][m];
            vis=new boolean[n][m];
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    graph[i][j]=sc.nextInt();
                }
            }
            x = sc.nextInt();
            y = sc.nextInt();
            k = sc.nextInt();
            solve(x,y,k,graph[x][y]);
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    out.print(graph[i][j]+" ");
                }
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