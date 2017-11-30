/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package test;

import java.lang.*;
import java.util.Arrays;
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
        int n,k,i,j,sum,x;
        int[]a;
        int[]b;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        k=sc.nextInt();
        a=new int[n];
        b=new int[n];
        for(i=0;i<n;i++)a[i]=b[i]=sc.nextInt();
        Arrays.sort(b,0,n);
        sum=0;
        for(i=0;i<n;i++)
            if(sum+b[i]<=k) sum+=b[i];
            else break;
        System.out.println(i);
        for(j=0;j<i;j++)
        {
            for(x=0;x<n;x++)
            {
                if(b[j]==a[x])
                {
                    a[x]=0;
                    x+=1;
                    System.out.print(x+" ");
                    break;
                }
            }
        }
    } 
}
