/* IMPORTANT: Multiple classes and nested static classes are supported */

/*
 * uncomment this if you want to read input.
//imports for BufferedReader
import java.io.BufferedReader;
import java.io.InputStreamReader;

//import for Scanner and other utility classes
import java.util.*;
*/

import java.util.Scanner;
// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail

class TestClass {
    private static int arr[];
    private static int k;
    public static void merge(int low ,int mid,int high)
    { 
        int l[],r[],i,j,p1,p2,x;
        p1=mid-low+1;
        p2=high-mid;
        l=new int[p1];
        r=new int[p2];
        for(i=0;i<p1;i++)l[i]=arr[i+low];
        for(i=0;i<p2;i++)r[i]=arr[i+mid+1];
        i=j=0;
        x=low;
        while(i<p1 && j<p2)
        {
            if(l[i]%k<=r[j]%k)
            {
                arr[x]=l[i];
                i++;
            }else
            {
                arr[x]=r[j];
                j++;
            }
            x++;
        }
        while(i<p1)
        {
            arr[x]=l[i];
            x++;
            i++;
        }
        while(j<p2)
        {
            arr[x]=r[j];
            x++;
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
        Scanner sc=new Scanner(System.in);
        int n;
        n=sc.nextInt();
        k=sc.nextInt();
        arr=new int[n];
        for (int i = 0; i < n; i++) arr[i]=sc.nextInt();
        mergeSort(0, n-1);
        for (int i = 0; i < n; i++) {
        System.out.print(arr[i]+" ");
        }
    }
}
