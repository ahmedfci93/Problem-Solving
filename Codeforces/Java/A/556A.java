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
    

    public static void main(String[] args) {
        int n,i,z;
        String s;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        s=sc.next();
        z=0;
        for(i=0;i<n;i++) 
        {
            if(s.charAt(i)=='0')z++;
        }
        System.out.println(Math.abs(z*2-n));
    } 
    
}
