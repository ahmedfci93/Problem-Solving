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
        int n,s1,d1,ans=0,i;
        Scanner sc=new Scanner(System.in);
        String s,d;
        n=sc.nextInt();
        s=sc.next();
        d=sc.next();
        for(i=0;i<n;i++)
        {
            s1=s.charAt(i)-'0';
            d1=d.charAt(i)-'0';
            if(s1<d1)
            {
                ans+=min(d1-s1,9-d1+s1+1);
            }else if(s1>d1)ans+=min(s1-d1,9-s1+d1+1);
        }
        System.out.println(ans);
    } 
}
