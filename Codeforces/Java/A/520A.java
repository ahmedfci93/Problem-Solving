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
        int i,n,ans=0;
        int []a;
        a=new int[26];
        String s,message="YES";
            Scanner sc=new Scanner(System.in);
            n=sc.nextInt();
            s=sc.next();
            s=s.toLowerCase();
            if(n>=26)
            {
                for(i=0;i<n;i++)
				{
                    a[s.charAt(i)-'a']++;
				}
                for(i=0;i<26;i++)
				{
                    if(a[i]==0)
                    {
                        message="NO";
                        break;
                    }
				}
            }else message="NO";
            
            System.out.println(message);
    }
}
