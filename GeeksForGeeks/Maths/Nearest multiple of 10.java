import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
        int t;
        String s="";
        String ans="";
        t = sc.nextInt();
        while (t > 0) {
            s=sc.next();
            ans="";
            int sz=s.length();
            char num[]=s.toCharArray();
            if(num[sz-1]-'0'<=5)
            {
                num[sz-1]='0';
            }else
            {
                num[sz-1]='0';
                for (int i =sz-2; i >=0; i--) {
                    if(num[i]-'0'+1==10)
                        num[i]='0';
                    else
                    {
                        int x=(num[i]-'0'+1);
                        num[i]= (char)(x+'0');
                        break;
                    }
                }
                if(num[0]=='0')
                {
                    ans="1";
                }
            }
            ans+=new String(num);
            System.out.println(ans);
            t--;
        }
	}
}