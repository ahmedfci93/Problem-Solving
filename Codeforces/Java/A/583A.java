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
        int n,v,h,i;
        int [][]roads=new int[2][51];
        Scanner sc= new Scanner(System.in);
        n=sc.nextInt();
        n*=n;
        for(i=1;i<=n;i++)
        {
            h=sc.nextInt();
            v=sc.nextInt();
            if(roads[1][v]<1 && roads[0][h]<1 )
            {
                roads[1][v]++;
                roads[0][h]++;
                System.out.print(i+" ");
            }
        }
        System.out.println("");
    } 
}
