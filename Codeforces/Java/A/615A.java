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
        int n,m,x,i,j,ans=0;
        int [] bulbs=new int[101];
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        m=sc.nextInt();
        for(i=0;i<n;i++)
        {
            x=sc.nextInt();
            for(j=0;j<x;j++)
            {
                bulbs[sc.nextInt()]++;
            }
        }
        for(i=1;i<101;i++) if(bulbs[i]!=0)ans++;
        if(ans==m)System.out.println("YES");
        else System.out.println("NO"); 
    } 
}