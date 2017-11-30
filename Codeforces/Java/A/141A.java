import java.util.Scanner;

/**
 *
 * @author Mido
 */
public class Test {

    /**
     * @param args the command
     */
    
    public static void main(String[] args) {
        int i,n,ans=0,len;
        int []a;
        int []b;
        a=new int[26];
        b=new int[26];
        String s,message="YES",s1;
            Scanner sc=new Scanner(System.in);
            s=sc.next();
            s+=sc.next();
            s1=sc.next();
            len=s.length();
            for(i=0;i<len;i++)a[s.charAt(i)-'A']++;
            len=s1.length();
            for(i=0;i<len;i++)b[s1.charAt(i)-'A']++;
            message = Arrays.equals(a,b)?"YES":"NO";
            System.out.println(message);
    }
}