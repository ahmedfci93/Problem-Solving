package bubble_sort;

import java.util.*;

/**
 *
 * @author Mido
 */
/*
Complexity: O(n^2)
Algorithm:
Compare each pair of adjacent elements from the beginning of an array and, 
if they are in reversed order, swap them.
If at least one swap has been done, repeat step 1
*/
public class Bubble_Sort {

    public static void bubbleSort(int a[])
    {
        int i=a.length,j,tmp;
        boolean swapped=true;
        while(swapped)
        {
            swapped=false;
            for(j=0;j<i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    tmp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=tmp;
                    swapped=true;
                }
            }
        }
    }
    
    public static void main(String[] args) {
        int i,m;
        int a[];
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter number (size of array) to test");
        m=sc.nextInt();
        a=new int[m];
        i=0;
        while(i<m)
        {
            a[i]=(int)(Math.random()*50 +1);
            i++;
        }
        i=0;
        while(i<m)
        {
            System.out.print(a[i]+" ");
            i++;
        }
        System.out.println();
        bubbleSort(a);
        i=0;
        while(i<m)
        {
            System.out.print(a[i]+" ");
            i++;
        }
    }
}
