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
        String n;
        int i;
        char c;
        Scanner sc= new Scanner(System.in);
        n=sc.next();
        int len = n.length();
        c=n.charAt(0);
        if('9'- c<c-'0'&&'9'-c!=0)
                System.out.print('9'-c);
        else System.out.print(c);
        for(i=1;i<len;i++)
        {
            c=n.charAt(i);
            if('9'- c<c-'0')
                System.out.print('9'-c);
            else System.out.print(c);
        }
    } 
}
