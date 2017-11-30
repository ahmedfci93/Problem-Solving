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
        int a,b,tmp,i,n;
        a=b=0;
        Scanner sc=new Scanner(System.in);
       
        for(i=0;i<3;i++)
        {
            tmp=sc.nextInt();
            a+=tmp;
        }
        for(i=0;i<3;i++)
        {
            tmp=sc.nextInt();
            b+=tmp;
        }
         n=sc.nextInt();
         tmp=(int) (Math.ceil((double)a/5)+Math.ceil((double)b/10));
        System.out.println(tmp<=n?"YES":"NO");
    } 

    
}
