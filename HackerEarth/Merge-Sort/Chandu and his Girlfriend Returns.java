/* IMPORTANT: Multiple classes and nested static classes are supported */

/*
 * uncomment this if you want to read input.
//imports for BufferedReader
import java.io.BufferedReader;
import java.io.InputStreamReader;

//import for Scanner and other utility classes
import java.util.*;
*/
import java.util.Scanner;
import java.util.StringTokenizer;
import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Arrays;
// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail

class TestClass {
    private static int a[];
    private static int b[];
    private static int ans[];
    
    public static PrintWriter out;

    public static void merge(int n,int m) {
        int i, j,k;
        i=j=k= 0;
        while (i < n && j < m) {
            if (a[i] >= b[j]) {
                ans[k]=a[i];
                i++;
            } else {
                ans[k] = b[j];
                j++;
            }
            k++;
        }
        while (i < n) {
            ans[k] = a[i];
            k++;
            i++;
        }
        while (j < m) {
            ans[k] = b[j];
            k++;
            j++;
        }
    }
 
    public static void main(String[] args) {
        int t, n,m;
        out = new PrintWriter(new BufferedOutputStream(System.out), true);
        FastReader sc = new FastReader();
        t = sc.nextInt();
        for (int j = 0; j < t; j++) {
            n = sc.nextInt();
            m = sc.nextInt();
            a=new int[n];
            b=new int[m];
            ans=new int[n+m];
            for (int i = 0; i < n; i++) {
                a[i]= sc.nextInt();
            }
            for (int i = 0; i < m; i++) {
                b[i]= sc.nextInt();
            }
            merge(n,m);
            for (int i = 0; i<n+m-1; i++) {
                out.print(ans[i]+" ");
            }
            out.println(ans[n+m-1]);
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
