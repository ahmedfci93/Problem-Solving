package test;

import java.lang.*;
import java.util.*;

/**
 *
 * @author Mido
 */
public class Test {
    
    public static void main(String[] args) 
    {
        int n,i;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        for(i=n;i>0;i--)
        {
            if(n%i==0)
            {
                System.out.print(i+" ");
                n=i;
            }
        }
    }
    } 