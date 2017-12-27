public class Solution {
    public String convertToTitle(int A) {int rem;
        int num=A;
        String ans="";
        while (num > 0) {
            if(num%26==0)
            {
                ans+='Z';
                num--;//cause all remainders from 1 to 26
            }else
            {
                ans+= (char) (((num%26))+('A'-1));
            }
            num/=26;
        }
        String ret="";
        for (int i = ans.length()-1; i >=0; i--) {
            ret+=ans.charAt(i);
        }
        return ret;
    }
}
