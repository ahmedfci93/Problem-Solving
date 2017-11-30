#include <iostream>
#include <math.h> 
using namespace std;

int main() {
	int r,c,size,index=0,l,i,j;
    char ans[81][81]={" "};
	string s;
	cin>>s;
	size=s.size();
	l=ceil(sqrt(size));
	for(i=0;i<l && index!=size;i++)
	{
		for(j=0;j<l&& index!=size;j++)
		{
			ans[j][i]=s[index];
			index++;
		}
	}
	for(i=0;i<l;i++)
	{
		printf("%s",ans[i]);
        if(i!=l-1)
		  cout<<" ";
	}	
	return 0;
}