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
        int n,x,i,c,ans=0;
        HashMap<String,Integer> db= new HashMap();
        String s;
        Scanner sc=new Scanner(System.in);
        c=0;
        n=sc.nextInt();
        for(i=0;i<n;i++)
        {
            s=sc.next();
            if(db.containsKey(s))
            {
                c=db.get(s);
                c++;
                System.out.println(s+c);
                db.put(s, c);
            }else
            {
                db.put(s,0) ;
                System.out.println("OK");
            }
            
        }
    } 
}
