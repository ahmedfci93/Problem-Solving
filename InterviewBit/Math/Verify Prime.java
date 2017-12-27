public class Solution {
    public int isPrime(int A) {
        if(A==2)return 1;
        if(A==0||A==1||A%2==0)return 0;
        for(int i=3 ; i<=Math.sqrt(A);i+=2)
            if (A%i==0)return 0;
        return 1;
    }
}
