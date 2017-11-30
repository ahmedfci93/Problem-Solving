/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package test;

import java.lang.*;
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
        
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt(),ans=1,x;
		for(int i=1;i<=n;i++)
		{
			x=sc.nextInt();
			if(x==1)ans=-1;
		}
		System.out.println(ans);
	
    } 
}
