public class Solution {
    public int maxArr(int[] A) {
        int i,mx1,mx2,mx3,mx4;
        int n=A.length;
        mx1=mx2=mx3=mx4=Integer.MIN_VALUE;
        int ans=Integer.MIN_VALUE;
        for(i=1;i<=n;i++)
        {
            mx1 = Math.max(mx1, A[i-1] + i);
            mx2 = Math.max(mx2, -A[i-1] + i);
            mx3 = Math.max(mx3, A[i-1] - i);
            mx4 = Math.max(mx4, -A[i-1] - i);
        }
        for(i=1;i<=n;i++)
        {
            ans = Math.max(ans,mx1-A[i-1] - i);
            ans = Math.max(ans,mx2+A[i-1] - i);
            ans = Math.max(ans,mx3 -A[i-1] + i );
            ans = Math.max(ans,mx4 + A[i-1] + i);
        }
        return ans;
    }
}
