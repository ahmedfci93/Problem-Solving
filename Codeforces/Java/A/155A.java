/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package test;

import static java.lang.Math.*;
import java.util.Arrays;
import java.util.Scanner;

/**
 *
 * @author Mido
 */
public class Test {

    /**
     * @param args the command
     */
    
    public static void main(String[] args) {
        int ans=0,i,j,n,more,less;
        int []a=new int[1001];
        Scanner sc=new Scanner(System.in);
       n=sc.nextInt();
       for(i=1;i<=n;i++) a[i]=sc.nextInt();
       for(i=n;i>1;i--)
       {
           more=less=0;
           for(j=i-1;j>=1;j--)
           {
               if(a[i]>a[j]) more++;
               else if(a[i]<a[j]) less++;
           }
           if(more==i-1 || less==i-1)ans++;
       }
        System.out.println(ans);
    } 

    
}
