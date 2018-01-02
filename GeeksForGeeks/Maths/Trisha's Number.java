import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) {
		//code
		Scanner sc = new Scanner(System.in);
        int t, x;
        t = sc.nextInt();
        while (t > 0) {
            x = sc.nextInt();
            x++;
            char ans[]=Integer.toString(x).toCharArray();
            int sz=ans.length;
            if(ans[0]<ans[sz-1])
            {
                x+=10-(ans[sz-1]-'0');
            }
            ans=Integer.toString(x).toCharArray();
            sz=ans.length;
            for (int i = 0,j=sz-1; i < sz/2; i++,j--) {
                if(ans[i]>ans[j])
                {
                    ans[j]=ans[i];
                }
                else if(ans[i]<ans[j])
                {
                    for (int k = j-1;k>=0; k--) {
                        int c=ans[k]-'0';
                        if(c+1<=9)
                        {
                            ans[k]+=(char)(1);
                            break;
                        }
                        ans[k]=(char)0;
                    }
                    ans[j]=ans[i];
                }
            }
            System.out.println(new String(ans));
            t--;
        }
	}
}