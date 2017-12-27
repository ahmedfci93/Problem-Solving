public class Solution {
    public int[] allFactors(int A) {
        List<Integer> a = new ArrayList<Integer>();
        for( int i = 1; i <= Math.sqrt(A); i++) {
            if (A % i == 0) {
                a.add(i);
                if (i != Math.sqrt(A)) {
                    a.add(A / i);
                }
            }
        }
        int [] ans=new int[a.size()];
        for (int i = 0; i < a.size(); i++) {
            ans[i]=(int)a.get(i);
        }
        Arrays.sort(ans);
        return ans;
    }
}
