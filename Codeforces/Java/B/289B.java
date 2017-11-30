package test;

import java.lang.*;
import java.util.*;

/**
 *
 * @author Mido
 */
public class Test {
    
    public static void main(String[] args) 
    {
        int n,i,m,d,ans=0,med;
        int a[]=new int[10000];
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        m=sc.nextInt();
        d=sc.nextInt();
        a[0]=sc.nextInt();
        for(i=1;i<n*m;i++)
        {
            a[i]=sc.nextInt();
            if((Math.abs(a[i-1]-a[i])%d)!=0)ans=-1;
        }
        if(ans!=-1)
        {
            Arrays.sort(a,0,m*n);
            med=a[(int)(Math.ceil((m*n)/2))];
            for(i=0;i<n*m;i++)ans+= Math.abs((a[i]-med));
            ans/=d;
        }
        System.out.println(ans);
    }
    } 