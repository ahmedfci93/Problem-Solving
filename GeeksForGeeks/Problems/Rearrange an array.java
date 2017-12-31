import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int t, n, arr[];
        t = sc.nextInt();
        String ans = "";
        while (t > 0) {
            ans = "";
            n = sc.nextInt();
            arr = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }
            for (int i = 0; i < n; i++) {
                ans += Integer.toString(arr[arr[i]]) + " ";
            }
            System.out.println(ans);
            t--;
        }
    }
}