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
    public static int binary(int[] a,int q,int n)
    {
        int l=1,h=n,m=0;
        while(h-l>1)
        {
            m=(l+h)/2;
            if(a[m]>q) h=m;
            else l=m;
        }
        return l;
    }
    public static void main(String[] args) 
    {
        int n,m,q,i,ind;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        int []piles=new int[n+1];
        piles[0]=0;
        for(i=1;i<=n;i++)piles[i]=sc.nextInt()+piles[i-1];
        m=sc.nextInt();
        for(i=0;i<m;i++)
        {
            q=sc.nextInt();
            ind=binary(piles,q,n);
            if(piles[ind-1]+1<=q && piles[ind]>=q)System.out.println(ind);
            else System.out.println(ind+1);
        }
    } 
}
