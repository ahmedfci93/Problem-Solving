import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int p,a,b,low,mid,high;
        int ans=0,t1,t2;
        p=sc.nextInt();
        a=sc.nextInt();
        b=sc.nextInt();
        low=1;
        high=Math.min(a,b);
        while(low<=high)
        {
            mid=low+(high-low)/2;
            t1=a/mid;
            t2=b/mid;
            if(t1+t2<p)
            {
                high=mid-1;
            }else
            {
                low=mid+1;
                ans=mid;
            }
        }
        System.out.println(ans);
    }
}
