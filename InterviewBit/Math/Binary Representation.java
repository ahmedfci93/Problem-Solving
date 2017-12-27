public class Solution {
    public String findDigitsInBinary(int A) {
        String s=new String();
        int num=A;
        String ans=new String ();
        if(num==0)ans="0";
        while(num!=0)
        {
            if(num%2==0) s+="0";
            else s+="1";
            num/=2;
        }
        for(int i=s.length()-1;i>=0;i--)
        {
            ans+=s.charAt(i);
        }
        return ans;
    }
}
