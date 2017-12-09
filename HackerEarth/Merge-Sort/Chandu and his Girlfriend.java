/* IMPORTANT: Multiple classes and nested static classes are supported */

/*
 * uncomment this if you want to read input.
//imports for BufferedReader
import java.io.BufferedReader;
import java.io.InputStreamReader;

//import for Scanner and other utility classes
*/import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;
import java.util.StringTokenizer;


// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail

class TestClass {
    private static int arr[];
    public static PrintWriter out;

    public static void merge(int low, int mid, int high) {
        int l[], r[], i, j, p1, p2, x;
        p1 = mid - low + 1;
        p2 = high - mid;
        l = new int[p1];
        r = new int[p2];
        for (i = 0, j = 0; i < p1 && j < p2; i++, j++) {
            l[i] = arr[i + low];
            r[j] = arr[mid + 1 + j];
        }
        if (i < p1) {
            while (i < p1) {
                l[i] = arr[i + low];
                i++;
            }
        }
        if (j < p2) {
            while (j < p2) {
                r[j] = arr[mid + 1 + j];
                j++;
            }
        }
        i = j = 0;
        x = low;
        while (i < p1 && j < p2) {
            if (l[i] >= r[j]) {
                arr[x] = l[i];
                i++;
            } else {
                arr[x] = r[j];
                j++;
            }
            x++;
        }
        while (i < p1) {
            arr[x] = l[i];
            x++;
            i++;
        }
        while (j < p2) {
            arr[x] = r[j];
            x++;
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
        FastReader sc = new FastReader();
        out = new PrintWriter(new BufferedOutputStream(System.out), true);
        int n, t;
        t = sc.nextInt();
        while (t-- > 0) {
            n = sc.nextInt();
            arr = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }
            mergeSort(0, n - 1);
            for (int i = 0; i < n; i++) {
                out.print(arr[i] + " ");
            }
            out.println("");
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
