public class Solution {
    public int isPrime(int A) {
        if(A==2)return 1;
        if(A==0||A==1||A%2==0)return 0;
        for(int i=3 ; i<=Math.sqrt(A);i+=2)
            if (A%i==0)return 0;
        return 1;
    }
    public int[] sieve(int A) {
        ArrayList<Integer> p=new ArrayList<Integer>();
        p.add(2);
        for (int i = 3; i <= A; i+=2) {
             if(isPrime(i)==1)
             {
                 p.add(i);
             }
        }
        int a[];
        a=new int[p.size()];
        for (int i = 0; i < p.size(); i++) {
            a[i]=p.get(i);
        }
        return a;
    }
}
//===================================================
// Another Solution
/*
public class Solution {
    public int[] sieve(int A) {
        int p[];
        p=new int[A+1];
        ArrayList<Integer> ans=new ArrayList<Integer>();
        for (int i = 2; i <= A; i++) {
            if(p[i]==0)
            {
                ans.add(i);
                for (int j =2*i; j <= A; j+=i) {
                    p[j]=1;
                }
            }
        }
        p=new int[ans.size()];
        for (int i = 0; i < ans.size(); i++) {
            p[i]=ans.get(i);
        }
        return p;
    }
}
*/