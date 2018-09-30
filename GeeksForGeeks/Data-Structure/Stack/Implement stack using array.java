{
import java.util.*;
class Stack_using_array {
     int top;
	 int arr[]=new int[1000];
    Stack_using_array()
	{
		top = -1;
	}
	
	public static void main(String args[])
	{
		
    
		 Scanner sc = new Scanner(System.in);
		 int t=sc.nextInt();
		 while(t>0)
		 {
			Stack_using_array qn = new Stack_using_array();
			GfG obj = new GfG();
			int Q = sc.nextInt();
			while(Q>0)
			{
				int QueryType = 0;
				QueryType = sc.nextInt();
				if(QueryType == 1)
				{
					int a = sc.nextInt();
					
					obj.push(a,qn);
					
				}else if(QueryType == 2)
				{
				System.out.print(obj.pop(qn)+" ");
				}
				Q--;
			}
			System.out.println("");
			t--;
		 }
	}
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* 
The structure of the class is
class Stack_using_array {
     int top;
	 int arr[]=new int[1000];
    Stack_using_array()
	{
		top = -1;
	}
 */
class GfG
{
	/* The method push to push element into the stack */
	void push(int a, Stack_using_array ob)
			{
				//Your code
				ob.top++;
				ob.arr[ob.top]=a;
			} 
         /*The method pop which return the element poped out of the stack*/
		int pop(Stack_using_array ob)
		{
			//Your code
			int ret =-1;
			if(ob.top!=-1){
    			ret = ob.arr[ob.top];
    			ob.top-=1;
			}
			return ret;
		} 
}