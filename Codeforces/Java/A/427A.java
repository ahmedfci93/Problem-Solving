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
        int n,i,ans=0,x,ps=0;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        for(i=0;i<n;i++)
        {
            x=sc.nextInt();
            if(x>=1) ps+=x;
            if(ps!=0 && x==-1)ps--;
            else if(x==-1) ans++;
        }
        System.out.println(ans);
    } 
    
}
