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
        int n,i,l,h,ans,k=0;
        int a[]=new int[2000];
        Scanner sc=new Scanner(System.in);
        while((n=sc.nextInt())!=0)
        {
            ans=0;
            for(i=0;i<n;i++)a[i]=sc.nextInt();
            Arrays.sort(a,0,n);
            for(h=n-1;h>=0;h--)
            {
                
                l=0;
                i=h-1;
                while(l<i)
                    if(a[h]>a[l]+a[i])
                    {
                        ans+=i-l;
                        l++;
                    }else i--;
            }
            System.out.println(ans);
        }
        
    } 
}