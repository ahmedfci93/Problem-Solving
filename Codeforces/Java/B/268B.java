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
        int ans=0,i,n;
        Scanner sc=new Scanner(System.in);
       n=sc.nextInt();
       for(i=1;i<=n;i++)
       {
           ans+=(i*(n-i))+1;
       }
        System.out.println(ans);
    } 

    
}
