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

    private static int w[];
    private static int a[];
    private static int ans[];

    public static void merge(int low, int mid, int high) {
        int l[], r[];
        int i, j, p1, p2, k, cnt;
        boolean right = false;
        p1 = mid - low + 1;
        p2 = high - mid;
        l = new int[p1];
        r = new int[p2];
        for (i = 0; i < p1; i++) {
            l[i] = w[i + low];
        }
        for (i = 0; i < p2; i++) {
            r[i] = w[i + mid + 1];
        }
        i = j = 0;
        cnt = 0;
        k = low;
        while (i < p1 && j < p2) {
            if (l[i] <= r[j]) {
                if (right) {
                    ans[l[i]] += cnt;
                }
                w[k] = l[i];
                i++;
            } else {
                right = true;
                cnt++;
                w[k] = r[j];
                j++;
            }
            k++;
        }
        while (i < p1) {
            w[k] = l[i];
            if (right) {
                ans[l[i]] += cnt;
            }
            k++;
            i++;
        }
        while (j < p2) {
            w[k] = r[j];
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
        int t, n = 0;
        FastReader sc = new FastReader();
        out = new PrintWriter(new BufferedOutputStream(System.out), true);
        t = sc.nextInt();
        for (int j = 0; j < t; j++) {
            n = sc.nextInt();
            w = new int[n];
            a = new int[n];
            ans = new int[1000001];
            for (int i = 0; i < n; i++) {
                w[i] = a[i] = sc.nextInt();
            }
            mergeSort(0, n - 1);
            for (int i = 0; i < n-1; i++) {
                System.out.print(ans[a[i]] + " ");
            }
            System.out.print(ans[a[n-1]]);
            System.out.println("");
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