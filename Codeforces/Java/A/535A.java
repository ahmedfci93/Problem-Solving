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
        int n,i,sum=0,x;
        String ans="";
        Scanner sc=new Scanner(System.in);
        String []a={"zero","one","two","three","four","five","six","seven","eight","nine","ten",
            "eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
        String []b={"" ,"","twenty", "thirty","forty","fifty","sixty","seventy","eighty","ninety"};
        n=sc.nextInt();
        if(n<=19)
            ans=a[n];
        else 
        {
            ans=b[n/10];
            if(n%10!=0)
            {
                ans+="-";
                ans+=a[n%10];
            }
        }
        System.out.println(ans);
    } 
}