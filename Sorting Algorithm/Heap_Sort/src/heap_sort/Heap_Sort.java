package heap_sort;

import java.util.Scanner;

/**
 *
 * @author ahmedfci93
 */
public class Heap_Sort {

    private static int n;
    private static int[] a;

    public static void swap(int x, int y) {
        int tmp;
        tmp = a[x];
        a[x] = a[y];
        a[y] = tmp;
    }

    public static void maxHeap(int ind) {
        int child1, child2, large;
        child1 = ind * 2 + 1;
        child2 = ind * 2 + 2;
        large = ind;
        if (child1 <= n && a[child1] > a[ind]) {
            large = child1;
        }
        if (child2 <= n && a[child2] > a[large]) {
            large = child2;
        }
        if (large != ind) {
            swap(large, ind);
            maxHeap(large);
        }
    }

    public static void buildHeap() {
        int i;
        n = a.length - 1;
        for (i = n / 2; i >= 0; i--) {
            maxHeap(i);
        }
    }

    public static void heapSort(int a1[]) {
        int i;
        a = a1;
        buildHeap();

        for (i = n; i > 0; i--) {
            swap(0, i);
            n--;
            maxHeap(0);
        }
    }

    public static void main(String[] args) {
        int i, m;
        int a1[];
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number (size of array) to test");
        m = sc.nextInt();
        a1 = new int[m];
        i = 0;
        while (i < m) {
            a1[i] = (int) (Math.random() * 50 + 1);
            i++;
        }
        i = 0;
        while (i < m) {
            System.out.print(a1[i] + " ");
            i++;
        }
        System.out.println();
        heapSort(a1);
        i = 0;
        while (i < m) {
            System.out.print(a[i] + " ");
            i++;
        }
    }
}
