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
        long ans=0,a,b,t;
        Scanner sc= new Scanner(System.in);
        a=sc.nextLong();
        b=sc.nextLong();
        while(b>0)
        {
            ans+=a/b;
            t=b;
            b=a%b;
            a=t;
        }
        System.out.println(ans);
    } 
}
