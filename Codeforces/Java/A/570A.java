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
        int n,m,i,j,mx,ind = 0,ans=0;
        int x;
        int []votes=new int[100];
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        m=sc.nextInt();
        for(i=0;i<m;i++)
        {
            mx=-1;
            for(j=0;j<n;j++)
            {
                x=sc.nextInt();
                if(x>mx)
                {
                    mx=x;
                    ind=j;
                }
            }
            votes[ind]++;
        }
        mx=0;
        for(j=0;j<n;j++)
        {
            if(mx<votes[j])
            {
                mx=votes[j];
                ans=j;
            }
        }
        System.out.println(ans+1);
    } 
}
