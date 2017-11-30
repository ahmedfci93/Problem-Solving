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
        
        int n,k,w,i,ans=0;
        Scanner sc=new Scanner(System.in);
        k=sc.nextInt();
        n=sc.nextInt();
        w=sc.nextInt();
        i=1;
        while(i<=w)
        {
            ans+=i*k;
            i++;
        }
        if(ans-n<=0)ans=0;
        else ans-=n;
        System.out.println(ans);
    }
}
