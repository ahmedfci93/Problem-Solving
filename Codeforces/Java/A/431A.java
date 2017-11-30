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
        int n,b,i,len,ans;
        String s;
        Scanner sc=new Scanner(System.in);
        int []a=new int[4];
        ans=0;
        for(i=0;i<4;i++)a[i]=sc.nextInt();
        s=sc.next();
        len=s.length();
        for(i=0;i<len;i++)ans+=a[(s.charAt(i)-'0')-1];
        System.out.println(ans);
    } 
}