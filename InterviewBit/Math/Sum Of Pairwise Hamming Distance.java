public class Solution {
    // DO NOT MODIFY THE LIST. IT IS READ ONLY
    public int hammingDistance(final List<Integer> A) {
        int ans = 0;
        int mod = 1000000007;
        int sz = A.size();
        int ones = 0;
        int zeros = 0;
        for (int i = 0; i < 31; i++) {
            ones =zeros = 0;
            for (int j = 0; j < sz; j++) {
                int num = A.get(j);
                ones += (num & 1 << i) != 0 ? 1 : 0;
            }
            zeros=sz-ones;
            ans+=(2*ones*zeros)%mod;
            ans%=mod;
        }
        return ans;
    }
}