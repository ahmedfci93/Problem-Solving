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
        int a,b,j,i,n;
        a=b=0;
        Scanner sc=new Scanner(System.in);
       n=sc.nextInt();
       int [][]table=new int [10][10];
       for(i=0;i<n;i++) table[0][i]=table[i][0]=1;
       for(i=1;i<n;i++)
       {
           for(j=1;j<n;j++)
           {
               table[i][j]=table[i][j-1]+table[i-1][j];
           }
       }
        System.out.println(table[n-1][n-1]);
    } 

    
}
