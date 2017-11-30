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
import java.util.HashMap;
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
        HashMap<Integer,Integer> h= new HashMap();
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        for(i=0;i<n;i++)
        {
            x=sc.nextInt();
            c= h.containsKey(x) ? h.get(x) : 0;
            c++;
            ans=Math.max(ans, c);
            h.put(x,c);
        }
        System.out.println(ans+" "+h.size());
    } 
}
