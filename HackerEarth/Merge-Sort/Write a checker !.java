/* IMPORTANT: Multiple classes and nested static classes are supported */

/*
 * uncomment this if you want to read input.
//imports for BufferedReader
import java.io.BufferedReader;
import java.io.InputStreamReader;

//import for Scanner and other utility classes
import java.util.*;
*/
import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import java.util.StringTokenizer;
// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail

class TestClass {
    static class ij
    {
        int i, j;

        public ij(int i, int j) {
            this.i = i;
            this.j = j;
        }
        
    }
    public static PrintWriter out;
    public static void main(String[] args) {
        int n;
        String name[], age[], htown[], addr[];
        List<ij> lst=new ArrayList<ij>();
        FastReader sc = new FastReader();
        out = new PrintWriter(new BufferedOutputStream(System.out), true);
        n = sc.nextInt();
        name = new String[n];
        age = new String[n];
        htown = new String[n];
        addr = new String[n];
        for (int i = 0; i < n; i++) {
            name[i] = new String(sc.next());
            age[i] = new String(sc.next());
            htown[i] = new String(sc.next());
            addr[i] = new String(sc.next());
        }
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                if(name[i].equals(name[j])||age[i].equals(age[j])||htown[i].equals(htown[j])||addr[i].equals(addr[j]))
                {
                    lst.add(new ij(i+1,j+1));
                }
            }
        }
        out.println(lst.size());
        for (int i = 0; i < lst.size(); i++) 
            out.println(lst.get(i).i+" "+lst.get(i).j);
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