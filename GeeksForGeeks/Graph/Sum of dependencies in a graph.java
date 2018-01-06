import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
        int t, n,e;
        t = sc.nextInt();
        while (t > 0) {
            n = sc.nextInt();
            e = sc.nextInt();
            HashMap<Integer,ArrayList<Integer>> lst;
            lst = new HashMap<Integer,ArrayList<Integer>>();
            for (int i = 0; i < e; i++) {
                int st,ed;
                st = sc.nextInt();
                ed = sc.nextInt();
                if(lst.containsKey(st))
                {
                    lst.get(st).add(ed);
                }else
                {
                    ArrayList<Integer> nLst=new ArrayList<Integer>();
                    nLst.add(ed);
                    lst.put(st, nLst);
                }
            }
            int ans=0;
            for (Map.Entry<Integer, ArrayList<Integer>> entry : lst.entrySet()) {
                ArrayList<Integer> value = entry.getValue();
                ans+=value.size();
            }
            System.out.println(ans);
            t--;
        }
	}
}