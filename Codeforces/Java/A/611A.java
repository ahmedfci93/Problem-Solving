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
        int x,ans=0,i,d=0,c;
        String s,of;
        int []m={31,29,31,30,31,30,31,31,30,31,30,31};
        Scanner sc=new Scanner(System.in);
        x=sc.nextInt();
        of=sc.next();
        s=sc.next();
        if(s.equals("week"))
        {
            for(i=0;i<12;i++)d+=m[i];
            c=5;
            for(i=0;i<d;i++)
            {
                if(x==c)ans++;
                c++;
                if(c>7)c=1;
            }
        }
        else
        {
            for(i=0;i<12;i++)
                if(x<=m[i])ans++;
        }
        System.out.println(ans);
    } 
}
