import java.math.BigInteger;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n,mn=Integer.MAX_VALUE,ind=0,i;
        int a[];
        int ans=Integer.MAX_VALUE;
        n=sc.nextInt();
        a=new int[n];
        for ( i = 0; i < n; i++) {
            a[i]=sc.nextInt();
            if(mn>a[i])
            {
                mn=a[i];
                ind=i;
            }
        }
        i = ind+1;
        for (; i < n; i++)
        {
            if(a[i]==mn)
            {
                ans=Math.min(ans, i-ind);
                ind=i;
            }
        }
        System.out.println(ans);
    }
}
