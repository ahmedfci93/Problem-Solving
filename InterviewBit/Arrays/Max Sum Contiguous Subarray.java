public class Solution {
    // DO NOT MODIFY THE ARGUMENTS WITH "final" PREFIX. IT IS READ ONLY
    public int maxSubArray(final int[] A) {
        int i;
        int ans=A[0];
        int b[]=new int[A.length];
        int sum=A[0];
        for (int j = 1; j < A.length; j++) 
        {
            if(A[j]+A[j-1]>=A[j])
            {
                A[j]=A[j]+A[j-1];
            }
            sum=Math.max(sum,A[j]);
        }
        return sum;
    }
}
