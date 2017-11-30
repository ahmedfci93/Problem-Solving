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
        String n,m;
        int a[]=new int[26];
        int a1[]=new int[26];
        int len,i,ans=0;
        Scanner sc=new Scanner(System.in);
        n=sc.next();
        m=sc.next();
        len=n.length();
        for(i=0;i<len;i++)a[n.charAt(i)-'a']++;
        len=m.length();
        for(i=0;i<len;i++)a1[m.charAt(i)-'a']++;
        for(i=0;i<26;i++)
        {
            if(a1[i]>0 && a[i]==0 )
            {
                System.out.println("-1");
                return;
            }else {
                ans+=Math.min(a1[i],a[i]);
            }
        }
        System.out.println(ans);
    }
}`