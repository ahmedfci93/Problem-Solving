#include <bits/stdc++.h>
using namespace std;

int main() {
	int i,j;
	char c;
	while(scanf("%c",&c)!=EOF)
	{
	
		if(c=='"')
		{
			(j%2==0)? printf("``"):printf("''");
			j++;
		}else printf("%c",c);
		
	}
	return 0;
}