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
        int a,b,s,sum;
        Scanner sc= new Scanner(System.in);
        a=sc.nextInt();
        b=sc.nextInt();
        s=sc.nextInt();
        sum=Math.abs(a)+Math.abs(b);
        if(sum<=s)
        {
            if((s-sum)%2==0)System.out.println("Yes");
            else System.out.println("No");
        }else System.out.println("No");
        
    } 
}
