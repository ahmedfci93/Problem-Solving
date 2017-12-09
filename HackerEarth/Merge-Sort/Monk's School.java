/* IMPORTANT: Multiple classes and nested static classes are supported */

/*
 * uncomment this if you want to read input.
//imports for BufferedReader
import java.io.BufferedReader;
import java.io.InputStreamReader;

//import for Scanner and other utility classes
import java.util.*;
*/
import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Scanner;
import java.util.StringTokenizer;

/**
 *
 * @author Belal
 */
class Student{
        public String name;
        public int age;
        public Student(String name, int age) {
            this.name = name;
            this.age = age;
        }
    }

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail

class TestClass {
    private static String teachers[];
    private static Student students[];
    public static PrintWriter out;

    public static void mergeTeacher(int low, int mid, int high) {
        String l[], r[];
        int i, j, p1, p2, x;
        p1 = mid - low + 1;
        p2 = high - mid;
        l = new String[p1];
        r = new String[p2];
        for (i = 0; i < p1; i++) {
            l[i] = teachers[i + low];
        }
        for (i = 0; i < p2; i++) {
            r[i] = teachers[mid + 1 + i];
        }
        i = j = 0;
        x = low;
        while (i < p1 && j < p2) {
            if (l[i].compareTo(r[j]) <= 0 ) {
                teachers[x] = l[i];
                i++;
            } else {
                teachers[x] = r[j];
                j++;
            }
            x++;
        }
        while (i < p1) {
            teachers[x] = l[i];
            x++;
            i++;
        }
        while (j < p2) {
            teachers[x] = r[j];
            x++;
            j++;
        }
    }
    public static void mergeStudent(int low, int mid, int high)
    {
        Student l[], r[];
        int i, j, p1, p2, x;
        p1 = mid - low + 1;
        p2 = high - mid;
        l = new Student[p1];
        r = new Student[p2];
        for (i = 0; i < p1; i++) {
            l[i] = students[i + low];
        }
        for (i = 0; i < p2; i++) {
            r[i] = students[mid + 1 + i];
        }
        i = j = 0;
        x = low;
        while (i < p1 && j < p2) {
            if (l[i].age <= r[j].age) {
                students[x] = l[i];
                i++;
            } else {
                students[x] = r[j];
                j++;
            }
            x++;
        }
        while (i < p1) {
            students[x] = l[i];
            x++;
            i++;
        }
        while (j < p2) {
            students[x] = r[j];
            x++;
            j++;
        }
    }

    public static void mergeSort(int low, int high, String kind) {
        int mid;
        if (low < high) {
            mid = low + (high - low) / 2;
            mergeSort(low, mid, kind);
            mergeSort(mid + 1, high, kind);
            if (kind.equalsIgnoreCase("teacher")) {
                mergeTeacher(low, mid, high);
            }else
            {
                mergeStudent(low, mid, high);
            }
        }
    }
    
    

    public static void main(String[] args) {
        FastReader sc = new FastReader();
        out = new PrintWriter(new BufferedOutputStream(System.out), true);
        int n, m,age;
        ArrayList<Student> stLst;
        String name, t;
        n = sc.nextInt();
        m = sc.nextInt();
        teachers = new String[n];
        for (int i = 0; i < n; i++) {
            teachers[i] = sc.next();
        }
        HashMap<String ,ArrayList<Student>> lst=new HashMap<String,ArrayList<Student>>(); 
        for (int i = 0; i < m; i++) {
            t=sc.next();
            name=sc.next();
            age=sc.nextInt();
            Student st = new Student(name,age);
            if(!lst.containsKey(t))
            {
                stLst=new ArrayList<Student>();
            }else
            {
                stLst=lst.get(t);
            }
            stLst.add(st);
            lst.put(t, stLst);
        }
        mergeSort(0, n-1, "teacher");
        for (int i = 0; i < n; i++) {
            out.println(teachers[i]);
            stLst=lst.get(teachers[i]);
            students= (Student[]) stLst.toArray(new Student[stLst.size()]);
            mergeSort(0, stLst.size()-1, "student");
            for (int j = 0; j < stLst.size(); j++) {
                out.println(students[j].name+" "+students[j].age);
            }
            out.print("");
        }
        
        out.close();
    }

    static class FastReader {

        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }

        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        long nextLong() {
            return Long.parseLong(next());
        }

        double nextDouble() {
            return Double.parseDouble(next());
        }

        String nextLine() {
            String str = "";
            try {
                str = br.readLine();
            } catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }
}
