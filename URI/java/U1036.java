import java.io.File;
import java.lang.*;
import java.text.DecimalFormat;
import java.util.*;

/**
 *
 * @author Mido
 */
public class Main {
    public static void main(String[] args) 
    {
        double a,b,c,d,r1=0,r2=0;
        Scanner sc=new Scanner(System.in);
        DecimalFormat df = new DecimalFormat("#.#####");
        a=sc.nextDouble();
        b=sc.nextDouble();
        c=sc.nextDouble();
        d=(b*b)-(4*a*c);
        if(d>=0 && a!=0)
        {
            r1=((-1*b)+Math.sqrt(d))/(2*a);
            r2=((-1*b)-Math.sqrt(d))/(2*a);
            System.out.println("R1 = "+df.format(r1)+"\n"+"R2 = "+df.format(r2));
        }else System.out.println("Impossivel calcular");
    }
}