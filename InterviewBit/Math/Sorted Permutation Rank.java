import java.math.BigInteger;
public class Solution {
    public int countR(String s)
    {
        int cnt=0;
        for (int j =1; j < s.length(); j++) {
            if(s.charAt(0)>s.charAt(j))cnt++;
        }
        return cnt;
    }
    public int findRank(String A) {
        int mod=1000003;
        int sz=A.length();
        BigInteger b=new BigInteger("1");
        for (int i = 2; i <= sz; i++) {
            b=b.multiply(new BigInteger(Integer.toString(i)));
        }
        BigInteger rank=new BigInteger("1");
        BigInteger tmp;
        for (int i = 0; i < sz-1; i++) {
            int cnt=countR(A.substring(i,sz));
            b=b.divide(BigInteger.valueOf(sz-i));
            rank=rank.add(b.multiply(BigInteger.valueOf(cnt)));
            rank=rank.remainder(BigInteger.valueOf(mod));
        }
        return Integer.parseInt(rank.toString());
    }
}
