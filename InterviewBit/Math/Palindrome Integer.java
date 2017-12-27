public class Solution {
    public int isPalindrome(int A) {
        String num=Integer.toString(A);
        for(int i=0;i<num.length();i++)
        {
            if(num.charAt(i)!=num.charAt(num.length()-1-i)) return 0;
        }
        return 1;
    }
}
