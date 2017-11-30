package quick_sort;

import java.util.Scanner;

/**
 *
 * @author Mido
 */
public class Quick_sort {
    private static int n;
    public static void swap(int x,int y,int a[])
    {
        int tmp;
        tmp=a[x];
        a[x]=a[y];
        a[y]=tmp;
    }
   public static void quickSort(int a[],int low,int high)
   {
       int i=low,j=high;
       int pivot=a[(i+j)/2];
       while(i<=j)
       {
           while(a[i]<pivot)i++;
           while(a[j]>pivot)j--;
           if(i<=j)
           {
               swap(i,j,a);
               i++;
               j--;
           }
       }
       if(low<j) quickSort(a,low,j);
       if(i<high)quickSort(a,i,high);
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
        quickSort(a,0,m-1);
        i=0;
        while(i<m)
        {
            System.out.print(a[i]+" ");
            i++;
        }
    }
    
}
