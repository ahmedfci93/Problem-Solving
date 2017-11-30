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
        int n,i;
        String ans;
        long []a=new long[100000];
        Scanner sc=new Scanner(System.in);
       n=sc.nextInt();
       for(i=0;i<n;i++) a[i]=sc.nextLong();
        System.out.println(Math.abs(a[1]-a[0])+" "+ Math.abs(a[n-1]-a[0]));
       for(i=1;i<n-1;i++)
       {
           ans="";
           ans+=Math.min(Math.abs(a[i-1]-a[i]),Math.abs(a[i]-a[i+1]))
                   +" "+
                   Math.max(Math.abs(a[i]-a[0]),Math.abs(a[i]-a[n-1]));
           System.out.println(ans);
       }
        System.out.println(Math.abs(a[n-1]-a[n-2])+" "+ Math.abs(a[n-1]-a[0]));
    } 

    
}
