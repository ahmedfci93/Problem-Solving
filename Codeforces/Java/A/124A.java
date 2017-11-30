/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package test;

import java.lang.*;
import java.util.*;

/**
 *
 * @author Mido
 */
public class Test {

    /**
     * @param a
     * @param q
     * @param args the command
     * @return 
     */
    
    public static void main(String[] args) 
    {
        int n,a,b;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        a=sc.nextInt();
        b=sc.nextInt();
        if(n-a<=b)
        {
            System.out.println(n-a);
        }else System.out.println(b+1);
    } 
}