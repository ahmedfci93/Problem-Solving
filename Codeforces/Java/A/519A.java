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
    public static int weight(char c)
    {
        c=Character.toLowerCase(c);
        switch(c)
        {
            case 'q': return 9;
            case 'r': return 5;
            case 'b': return 3;
            case 'n': return 3;
            case 'p': return 1;
            case 'k':
            break;
        }
        return 0;
    }
    public static void main(String[] args) {
        int j,i,w,b;
        String ans;
        char c;
        String []a=new String[8];
        Scanner sc=new Scanner(System.in);
       w=b=0;
       for(i=0;i<8;i++) a[i]=sc.next();
       for(i=0;i<8;i++) 
       {
           for(j=0;j<8;j++) 
           {
               c=a[i].charAt(j);
               
               if(c!='.')
               {
                   if(c>='a'&&c<='z')b+=weight(c);
                   else w+=weight(c);
               }
           }
       }
       if(w>b)System.out.println("White");
       else if(w<b)System.out.println("Black");
       else System.out.println("Draw");
    } 

    
}
