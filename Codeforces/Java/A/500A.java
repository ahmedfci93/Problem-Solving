/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package test;

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
        Scanner sc=new Scanner(System.in);
        int i,a,n,t,ans=0;
        int[] ai=new int[30002];
        n=sc.nextInt();
        t=sc.nextInt();
        ai[n]=1;
        for(i=1;i<n;i++)
        {
           ai[i]=sc.nextInt();
        }
        for(i=1;i<=n;i+=ai[i])
        {
            if(i==t)ans=1;
        }
        String message= new String();
        if(ans==1)message="YES";
        else message="NO";
        System.out.println(message);
    }
}
