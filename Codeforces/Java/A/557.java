import java.lang.*;
import java.util.*;

/**
 *
 * @author Mido
 */
public class Test {
    
    public static void main(String[] args) 
    {
        int n,i,j;
        int max[],min[];
        max=new int[3];
        min=new int [3];
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        for(i=0;i<3;i++)
        {
           min[i]=sc.nextInt();
           max[i]=sc.nextInt();
        }
        while(min[0]+min[1]+min[2]!=n)
        {
            if(min[0]<max[0]) min[0]++;
            else if(min[1]<max[1]) min[1]++;
            else if(min[2]<max[2]) min[2]++;
        }
        System.out.println(min[0]+" "+min[1]+" "+min[2]);
    }
}