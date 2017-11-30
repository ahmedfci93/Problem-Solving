import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;

class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner in = new Scanner(System.in);
		int num,t;
		t=in.nextInt();
		
		for (int j=0; j<t; j++)
		{
			num=in.nextInt();
			BigInteger result = BigInteger.ONE;
        	for (int i=1; i<=num; i++) {
            result = result.multiply(BigInteger.valueOf(i));
        	}
        System.out.println(result);
		}
	}
}