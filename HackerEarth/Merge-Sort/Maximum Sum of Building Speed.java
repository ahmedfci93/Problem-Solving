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
import java.util.HashMap;
import java.util.List;
import java.util.Scanner;
import java.util.StringTokenizer;
// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail

class TestClass {
    public static PrintWriter out;
    private static int a[];

    public static void merge(int low, int mid, int high) {
        int l[], r[];
        int i, j, p1, p2, k;
        p1 = mid - low + 1;
        p2 = high - mid;
        l = new int[p1];
        r = new int[p2];
        for (i = 0; i < p1; i++) {
            l[i] = a[i + low];
        }
        for (i = 0; i < p2; i++) {
            r[i] = a[i + mid + 1];
        }
        i = j = 0;
        k = low;
        while (i < p1 && j < p2) {
            if (l[i] <= r[j]) {
                a[k] = l[i];
                i++;
            } else if (l[i] > r[j]) {
                a[k] = r[j];
                j++;
            }
            k++;
        }
        while (i < p1) {
            a[k] = l[i];
            k++;
            i++;
        }
        while (j < p2) {
            a[k] = r[j];
            k++;
            j++;
        }
    }

    public static void mergeSort(int low, int high) {
        int mid;
        if (low < high) {
            mid = low + (high - low) / 2;
            mergeSort(low, mid);
            mergeSort(mid + 1, high);
            merge(low, mid, high);
        }
    }

    public static void main(String[] args) {
        int n, ans = 0;
        FastReader sc = new FastReader();
        out = new PrintWriter(new BufferedOutputStream(System.out), true);
        n = sc.nextInt();
        a=new int[2*n];
        for (int i = 0; i < 2*n; i++) {
            a[i]=sc.nextInt();
        }
        mergeSort(0, 2*n - 1);
        for (int i = 0; i < 2*n; i+=2) {
            ans+=Math.min(a[i], a[i+1]);
        }
        out.print(ans);
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
