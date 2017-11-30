/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package test;

import static java.lang.Math.*;
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
    
    public static void main(String[] args) {
        int i,move,len,ind;
        Scanner sc=new Scanner(System.in);
       String s=new String(),d=new String();
       String letter="qwertyuiop"+"asdfghjkl;"+"zxcvbnm,./",ans="";
       d=sc.next();
       s=sc.next();
       if(d.equals("L"))move=1;
       else move=-1;
       len=s.length();
       for(i=0;i<len;i++)
       {
           ind=letter.indexOf(s.charAt(i));
           ind=move+ind;
           ans+=letter.charAt(ind);
       }
        System.out.println(ans);
    } 

    
}
