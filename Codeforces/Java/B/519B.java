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
        int n,i;
        long a=0,b=0,c=0,er1,er2;
        Scanner sc= new Scanner(System.in);
        n=sc.nextInt();
        for(i=0;i<n;i++)a+=sc.nextLong();
        for(i=0;i<n-1;i++)b+=sc.nextLong();
        for(i=0;i<n-2;i++)c+=sc.nextLong();
        er1=a-b;
        er2=b-c;
        System.out.println(er1+"\n"+er2);
    } 
}
