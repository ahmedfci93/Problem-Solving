public class Solution {
    public int reverse(int A) {
        String s=Integer.toString(A);
        String ans="";
        int ne=0;
        if(A<0)ne=1;
        int sz=s.length();
        for (int i = sz-1; i>=ne; i--) {
            ans+=s.charAt(i);
        }
        long ret=Long.parseLong(ans);
        if(ne==1)ret*=-1;
        if(ret>Integer.MAX_VALUE||ret<Integer.MIN_VALUE) ret=0;
        return (int)ret;
    }
}
