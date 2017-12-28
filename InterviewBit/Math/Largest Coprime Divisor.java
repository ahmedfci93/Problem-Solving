public class Solution {
    public int GCD(int x,int y)
    {
        if(x==0)return y;
        return GCD(y%x, x);
    }
    public int cpFact(int A, int B) {
        while (GCD(A,B)!=1)
        {
            A/=(GCD(A,B));
        }
        return A;
    }
}
