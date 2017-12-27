public class Solution {
    public int[] plusOne(int[] A) {
        int b[];
        int i,j;
        int done=0;
        for(i=A.length-1;i>=0;i--)
        {
            if(A[i]+1<=9)
            {
                done=1;
                A[i]+=1;
                break;
            }else
            {
                A[i]=0;
            }
        }
        if(done==0)
        {
            int sz=A.length+1;
            A=new int[sz];
            A[0]=1;
            b=A;
        }else
        {
            for(i=0;i<A.length;)
                if(A[i]==0)i++;
                else break;
            b= new int[A.length-i];
            for(j=0;j<b.length;j++)
            {
                b[j]=A[i];
                i++;
            }
        }
        return b;
        
        
    }
}
