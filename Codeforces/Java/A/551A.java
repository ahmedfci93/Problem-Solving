/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package test;

import java.lang.*;
import static java.util.Arrays.sort;
import java.util.Collections;
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
        int n,i,j,c,rate;
        int []a=new int[2000];
        Scanner sc= new Scanner(System.in);
        n=sc.nextInt();
        for(i=0;i<n;i++) a[i]=sc.nextInt();
        for(i=0;i<n;i++)
        {
            rate=1;
            for(j=0;j<n;j++)if(a[j]>a[i])rate++;
            System.out.print(rate+" ");
        }
        
    } 
}
