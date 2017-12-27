public class Solution {
    public int titleToNumber(String A) {
        int sz=A.length(),i;
        int ans=0;
        int cNum;
        int pow=1;
        ans=A.charAt(sz-1)-'A'+1;
        for(i=sz-2;i>=0;i--)
        {
            pow*=26;
            cNum=A.charAt(i)-'A'+1;
            ans+= (cNum*pow);
        }
        return ans;
    }
}
