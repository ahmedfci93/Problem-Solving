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
        int i=0,len;
        String s=sc.next(),s1=sc.next(),ans="";
        len=s.length();
        while(i<len)
        {
            ans+=s.charAt(i)!=s1.charAt(i)?'1':'0';
            i++;
        }
        System.out.println(ans);
    }
}
