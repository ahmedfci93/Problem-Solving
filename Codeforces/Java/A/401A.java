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
        int n,i,sum=0,x,ans=0;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        x=sc.nextInt();
        for(i=0;i<n;i++)sum+=sc.nextInt();
        sum=Math.abs(sum);
        if(sum%x==0)ans=sum/x;
        else ans=1+sum/x;
        System.out.println(ans);
    } 
}