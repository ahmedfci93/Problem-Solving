import java.io.File;
import java.lang.*;
import java.util.*;

//solution , it has complexity =O( nlong(n) )

/**
 *
 * @author Mido
 */
public class Main {
    public static void main(String[] args) 
    {
        double a;
        Scanner sc=new Scanner(System.in);
        a=sc.nextDouble();
        if(a<0.0 ||a>100)
        {
            System.out.println("Fora de intervalo");
        }else
        {
            if(a<=25.0)    System.out.println("Intervalo [0,25]");
            else if( a<=50.0) System.out.println("Intervalo (25,50]");
            else if(a<=75.0)System.out.println("Intervalo (50,75]");
            else System.out.println("Intervalo (75,100]");
                
        }
    }
}