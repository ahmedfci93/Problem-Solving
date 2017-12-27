public class Solution {
    // DO NOT MODIFY THE ARGUMENTS WITH "final" PREFIX. IT IS READ ONLY
    public int[] repeatedNumber(final int[] A) {
        int ans[]={0,0};
        int i;
        boolean stop = false;
        Arrays.sort(A);
        int l=1;
        for (i = 0; i < A.length - 1 && (ans[0] == 0 || ans[1] == 0); i++) {
            if (A[i] == A[i + 1]) {
                ans[0] = A[i];
                i++;
            }
            if (A[i] != l && stop==false) {
                ans[1] = l;
                stop = true;
            }
            l++;
        }
        if(ans[1]==0)ans[1]=l;
        return ans;
    }
}
