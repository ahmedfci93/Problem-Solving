package solution;

import java.util.*;

public class Solution {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n, a, b;
        ArrayList<Integer> pieces = new ArrayList<Integer>();
        ArrayList<Integer> ans = new ArrayList<Integer>();
        n = sc.nextInt();
        a = sc.nextInt();
        b = sc.nextInt();
        ans.add(n);
        for (int i = 0; i < 4; i++) {
            if (i < 2) {
                pieces.add(b);
            }
            pieces.add(a);
        }
        Collections.sort(pieces, Collections.reverseOrder());
        int sz;
        if ((a * 2 + b) == n) {
            System.out.println(2);
        } else {
            for (int i = 0; i < 6; i++) {
                int p = 0;
                boolean done = false;
                sz = ans.size();
                for (int j = 0; j < sz; j++) {
                    if (pieces.get(i) <= ans.get(j) && ans.get(j) != 0) {
                        p = ans.remove(j) - pieces.get(i);
                        ans.add(p);
                        done = true;
                        break;
                    }
                }
                if (!done) {
                    p = n - pieces.get(i);
                    ans.add(p);
                }
            }
            System.out.println(ans.size());
        }
        
    }
}
