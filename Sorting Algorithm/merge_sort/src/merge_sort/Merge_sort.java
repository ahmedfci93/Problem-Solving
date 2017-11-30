package merge_sort;

import java.util.*;

/**
 *
 * @author Mido
 */
/*
Complexity: O(n logn)
Algorithm: MergeSort is a Divide and Conquer algorithm. It divides input array in two halves, 
calls itself for the two halves and then merges the two sorted halves. 
The mergsort() function is used for merging two halves. 
The merge(l, m, r) is key process that assumes that arr[l..m] and arr[m+1..r] are sorted and 
merges the two sorted sub-arrays into one.
*/
public class Merge_sort {

    private static int a[];
    private static int m;
    public static void merge(int low ,int mid,int high)
    { 
        int l[],r[],i,j,p1,p2,k;
        p1=mid-low+1;
        p2=high-mid;
        l=new int[p1];
        r=new int[p2];
        for(i=0;i<p1;i++)l[i]=a[i+low];
        for(i=0;i<p2;i++)r[i]=a[i+mid+1];
        i=j=0;
        k=low;
        while(i<p1 && j<p2)
        {
            if(l[i]<r[j])
            {
                a[k]=l[i];
                i++;
            }else
            {
                a[k]=r[j];
                j++;
            }
            k++;
        }
        while(i<p1)
        {
            a[k]=l[i];
            k++;
            i++;
        }
        while(j<p2)
        {
            a[k]=r[j];
            k++;
            j++;
        }
    }
    public static void mergeSort(int low ,int high)
    {
        int mid;
        if(low<high)
        {
            mid=low+(high-low)/2;
            mergeSort(low,mid);
            mergeSort(mid+1,high);
            merge(low,mid,high);
        }
    }
    public static void main(String[] args) {
        int i;
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
        mergeSort(0,m-1);
        i=0;
        while(i<m)
        {
            System.out.print(a[i]+" ");
            i++;
        }
    }
    
}
