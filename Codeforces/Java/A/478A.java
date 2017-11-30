mport java.util.Scanner;

/**
 *
 * @author Mido
 */
public class Test {

    /**
     * @param args the command
     */
    
    public static void main(String[] args) {
        int i,c,ans=0;
		Scanner sc=new Scanner(System.in);
		for(i=0;i<5;i++)
		{
			c=sc.nextInt();
			ans+=c;
		}
		if(ans%5==0 && ans!=0)
			System.out.println(ans/5);
		else System.out.println(-1);
    }
}