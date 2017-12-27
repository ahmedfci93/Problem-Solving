public class Solution {
    public int coverPoints(int[] A, int[] B) {
        int x,y;
        int ans=0;
        for(int i=0;i<A.length-1;i++)
        {
            x=Math.abs(A[i]-A[i+1]);
            y=Math.abs(B[i]-B[i+1]);
            ans+=Math.min(x, y)+Math.abs(x-y);
        }
        return ans;
    }
}
