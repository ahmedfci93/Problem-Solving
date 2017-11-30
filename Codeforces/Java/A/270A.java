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
        int i,t;
        Scanner sc= new Scanner(System.in);
        t=sc.nextInt();
        while(t-->0) System.out.println((360%(180-sc.nextInt())==0)?"YES":"NO");
    } 
}
