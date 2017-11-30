package insertion_sort;

import java.util.Scanner;

/**
 *
 * @author Mido
 */
/*
Complexity: O(n^2)
Algorithm: Pick element arr[i] and insert it into sorted sequence arr[0…i-1]
*/
public class Insertion_sort {

    public static void insertionSort(int a[])
    {
        int len=a.length,i,j,tmp;
        for(i=1;i<len;i++)
        {
            tmp=a[i];
            for(j=i-1;j>=0;j--)
            {
                if(tmp<a[j])
                {
                    a[j+1]=a[j];
                    a[j]=tmp;
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
        insertionSort(a);
        i=0;
        while(i<m)
        {
            System.out.print(a[i]+" ");
            i++;
        }
    }
    
}
