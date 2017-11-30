/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package test;

import java.lang.*;
import java.util.*;
import java.util.HashMap;
import java.util.Iterator;
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
        int n,t,i,ans;
        int []rubles=new int[2];
        String s;
        Scanner sc=new Scanner(System.in);
        ans=0;
        n=sc.nextInt();
        for(i=0;i<n;i++)
        {
            t=sc.nextInt();
            if(t==25)rubles[0]++;
            else if(t==50)
            {
                if(rubles[0]>0)
                {
                    rubles[0]--;
                    rubles[1]++;
                }else ans=1;
            }
            else
            {
                if(rubles[0]>0&&rubles[1]>0)
                {
                    rubles[0]--;
                    rubles[1]--;
                }else {
                    if(rubles[0]>2) rubles[0]-=3;
                    else ans=1;
                }
            }
            
        }
        if(ans==1)System.out.println("NO");
        else System.out.println("YES");
    } 
}
