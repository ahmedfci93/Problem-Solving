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
        int n,b,i,j,m,ans=0;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        m=sc.nextInt();
        for(i=0;i<=1000;i++)
        {
            for(j=0;j<=1000;j++)
            {
                if(i*i+j==n && j*j+i==m)ans++;
                if(i*i+j>n || j*j+i>m)break;
            }
        }
        System.out.println(ans);
    } 
}