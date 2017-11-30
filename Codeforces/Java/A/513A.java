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
        int n1,n2,k1,k2;
        Scanner sc=new Scanner(System.in);
       n1=sc.nextInt();
       n2=sc.nextInt();
       k1=sc.nextInt();
       k2=sc.nextInt();
        System.out.println(n1<=n2?"Second":"First");
    } 

    
}
