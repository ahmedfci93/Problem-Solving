package selection_sort;

import java.util.*;

/**
 *
 * @author Mido
 */
/*
Complexity:O(n^2).
Algorithm:
The selection sort is a combination of searching and sorting.
During each pass, the unsorted element with the smallest (or largest) value is moved to its proper position in the array.
Selecting the lowest element requires scanning all n elements (this takesn − 1 comparisons)
and then swapping it into the first position 
*/
public class Selection_sort {

    public static void selectionSort(int a[])
    {
        int len=a.length,j,i,tmp,min;
        for(i=0;i<len;i++)
        {
            min=i;
            for(j=i+1;j<len;j++)
                if(a[min]>a[j])min=j;
            
            tmp=a[i];
            a[i]=a[min];
            a[min]=tmp;
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
            a[i]=(int)(Math.random()*50 +1);;
            i++;
        }
        i=0;
        while(i<m)
        {
            System.out.print(a[i]+" ");
            i++;
        }
        System.out.println();
        selectionSort(a);
        i=0;
        while(i<m)
        {
            System.out.print(a[i]+" ");
            i++;
        }
    }
    
}
