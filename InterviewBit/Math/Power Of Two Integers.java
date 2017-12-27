public class Solution {
    public int isPower(int A) {
        int a;
        int ans=1;
        if(A==1)return ans;
        for (int i = 2; i <= Math.sqrt(A); i++) {
            if(A%i==0)
            {
                a=A;
                long cnt=1;
                while(a%i==0)
                {
                    cnt*=i;
                    a/=i;
                }
                if(cnt==A)return ans;
            }
        }
        return 0;
    }
}
