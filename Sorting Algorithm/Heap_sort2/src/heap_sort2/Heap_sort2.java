package heap_sort2;

import java.util.*;

/**
 *
 * @author Mido
 */
public class Heap_sort2 {
    private static int n;
    private static int a[];
    private static int res[];
    public static void swap(int ex,int indx)
    {
        int tmp;
        tmp=a[ex];
        a[ex]=a[indx];
        a[indx]=tmp;
    }
    public static void minHeap(int indx)
    {
        int small,child1,child2,parent,ex=0;
        small=a[indx];
        child1=2*indx+1;
        child2=2*indx+2;
        if(child1<=n-1&&a[child1]<small)
        {
            small=a[child1];
            ex=child1;
        }
        if(child2<=n-1&&a[child2]<small)
        {
            small=a[child2];
            ex=child2;
        }
        if(small!=a[indx])
        {
            swap(ex,indx);
            parent=(indx-1)/2;
            minHeap(parent);
        }
    }
    public static void buildHeap()
    {
        int i,m;
        m=(n-2)/2;
        for(i=0;i<=m;i++)
            minHeap(i);
    }
    public static void heapSort(int a1[])
    {
        a=a1;
        buildHeap();
        
    }
    public static void main(String[] args) {
        int i;
        int a1[];
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter number (size of array) to test");
        n=sc.nextInt();
        a1=new int[n];
        i=0;
        while(i<n)
        {
            a1[i]=(int)(Math.random()*50 +1);
            i++;
        }
        i=0;
        while(i<n)
        {
            System.out.print(a1[i]+" ");
            i++;
        }
        System.out.println();
        heapSort(a1);
        i=0;
        while(i<n)
        {
            System.out.print(a1[i]+" ");
            i++;
        }
    }
    
}
