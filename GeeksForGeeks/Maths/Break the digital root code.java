import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
        int t,n,x;
        t = sc.nextInt();
        while (t > 0) {
            n=sc.nextInt();
            x=sc.nextInt();
            for (int i = x,j=0;j<n; i++) {
                int num=i;
                while(num>9)
                {
                    int tmp=0;
                    while(num!=0)
                    {
                        tmp+=num%10;
                        num/=10;
                    }
                    num=tmp;
                }
                if(num==x)
                {
                    System.out.print(i+" ");
                    j++;
                }
            }
            System.out.println();
            t--;
        }
	}
}