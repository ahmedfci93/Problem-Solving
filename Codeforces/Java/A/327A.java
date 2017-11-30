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
        int n,a,i,ans,z,ones;
        Scanner sc= new Scanner(System.in);
        n=sc.nextInt();
        z=ones=0;
        ans=-1;
        for(i=0;i<n;i++)
        {
            a=sc.nextInt();
            if(a==0)
            {
                z++;
                if(ans<z)ans=z;
            }else
            {
                ones++;
                z--;
                if(z<0)z=0;
            }
        }
        System.out.println((ans+ones));
    } 
}
