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
        int i,len,n,upper,lower;
        Scanner sc=new Scanner(System.in);
       String s=new String();
       s=sc.next();
       len=s.length();
       upper=lower=0;
       for(i=0;i<len;i++)
       {
           if(s.charAt(i)>='a' && s.charAt(i)<='z' ) lower++;
           else upper++;
       }
       String ans= upper>lower?s.toUpperCase():s.toLowerCase();
        System.out.println(ans);
    } 

    
}
