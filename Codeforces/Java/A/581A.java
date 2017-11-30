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
        int a,b,tmp;
        Scanner sc=new Scanner(System.in);
        String s,d;
        a=sc.nextInt();
        b=sc.nextInt();
        if(a<b)
        {
            tmp=a;
            a=b;
            b=tmp;
        }
        System.out.println(b+" "+(a-b)/2);
    } 

    
}
