public class Solution {
    public ArrayList<String> fizzBuzz(int A) {
        ArrayList<String> ans=new ArrayList<String>();
        for(int i=1;i<=A;i++)
        {
            if(i%3==0&&i%5==0)
            {
                ans.add(new String("FizzBuzz"));
            }
            else if(i%3==0)
            {
                ans.add(new String("Fizz"));
            }
            else if(i%5==0)
            {
                ans.add(new String("Buzz"));
            }else
            {
                ans.add(new String(Integer.toString(i)));
            }
        }
        return ans;
    }
}
