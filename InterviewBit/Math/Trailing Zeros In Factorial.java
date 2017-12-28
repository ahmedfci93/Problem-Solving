public class Solution {
    public int trailingZeroes(int A) {
         if (A< 0) {
            return -1;
        }
        int ans = 0;
        for (int i = 5; A / i > 0; i *= 5) {
            ans+=A/i;
        }
        return ans;
    }
}
