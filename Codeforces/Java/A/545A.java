import java.lang.*;
import java.util.*;

/**
 *
 * @author Mido
 */
public class Test {

    public static void main(String[] args) 
    {
        int n,i,j,a,key,c=0;
        String ans="";
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        for(i=0;i<n;i++)
        {
            key=0;
            for(j=0;j<n;j++)
            {
                a=sc.nextInt();
                if(a==1 || a==3) key=1;
            }
            if(key==0)
            {
                ans+=(i+1)+" ";
                c++;
            }
        }
        System.out.println(c +"\n"+ans);
    } 
}