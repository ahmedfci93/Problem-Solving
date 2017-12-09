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

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail

class TestClass {
    public static String t[];
    public static void merge(int low, int mid, int high) {
        String[] r, l;
        int szR, szL, i, j,k;
        szL = mid - low + 1;
        szR = high - mid;
        l = new String[szL];
        r = new String[szR];
        for (i = 0; i < szL; i++) {
            l[i] = t[i + low];
        }
        for (i = 0; i < szR; i++) {
            r[i] = t[mid + 1 + i];
        }
        i = j = 0;
        k=low;
        while (i < szL && j < szR) {
            if (l[i].length() <= r[j].length()) {
                t[k] = l[i];
                i++;
            } else if (l[i].length() > r[j].length()){
                t[k] = r[j];
                j++;
            }
            k++;
        }
        while (i < szL) {
            t[k] = l[i];
            i++;
            k++;
        }
        while (j < szR) {
            t[k] = r[j];
            j++;
            k++;
        }
    }

    public static void mergeSort(int low, int high) {
        if (low < high) {
            int mid = low + (high - low) / 2;
            mergeSort(low, mid);
            mergeSort(mid + 1, high);
            merge(low, mid, high);
        }
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        String tmp = new String();
        s.nextLine();
        for (int i = 0; i < n; i++) {
            tmp = s.nextLine();
            t =tmp.split("\\s");
            mergeSort(0, t.length - 1);
            for (int j = 0; j < t.length; j++) {
            System.out.print(" "+t[j]);
            }
            System.out.println();
        }

    }
}
