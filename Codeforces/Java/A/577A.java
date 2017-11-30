/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package test;

import java.lang.*;
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
    

    public static void main(String[] args) 
    {
        long n,i,j,x,ans=0;
        Scanner sc=new Scanner(System.in);
        n=sc.nextLong();
        x=sc.nextLong();
        for(i=1;i<=n;i++) 
        {
            if(x%i==0 && x/i<=n)ans++;
        }
        System.out.println(ans);
    } 
    
}
