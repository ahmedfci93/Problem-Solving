#include <iostream>
#include <string>
using namespace std;

int main() {
	int i,j,n,l,x;
	string s;
	while(cin>>n && cin>>s&&n)
	{
		l=s.length();
		//top
		for(i=0;i<l;i++)
		{
			cout<<" ";
			switch(s[i])
			{
				case '1': case'4': for(j=0;j<n;j++)cout<<" ";
				break;
				default: for(j=0;j<n;j++)cout<<"-";
				break;
			}
			cout<<" ";
			if(i!=l-1)
				cout<<" ";
		}cout<<endl;
		//up
		for(x=0;x<n;x++)
		{
			for(i=0;i<l;i++)
			{
			
				switch(s[i])
				{
					case '0': case'4':case '8': case'9':
						cout<<"|";
						for(j=0;j<n;j++)cout<<" ";
						cout<<"|";
					break;
					case '1': case'2':case '3': case'7':
						cout<<" ";
						for(j=0;j<n;j++)cout<<" ";
						cout<<"|";
					break;
					default:
					cout<<"|";
						for(j=0;j<n;j++)cout<<" ";
						cout<<" ";
					break;
				}
				if(i!=l-1)
					cout<<" ";
			}cout<<endl;
		}
		//middle
		for(i=0;i<l;i++)
		{
			cout<<" ";
			switch(s[i])
			{
				case '0': case'1':case'7': for(j=0;j<n;j++)cout<<" ";
				break;
				default: for(j=0;j<n;j++)cout<<"-";
				break;
			}
			cout<<" ";
			if(i!=l-1)
				cout<<" ";
		}cout<<endl;
		//down
		for(x=0;x<n;x++)
		{
			for(i=0;i<l;i++)
			{
			
				switch(s[i])
				{
					case '0': case'6':case '8':
						cout<<"|";
						for(j=0;j<n;j++)cout<<" ";
						cout<<"|";
					break;
					case'2':
						cout<<"|";
						for(j=0;j<n;j++)cout<<" ";
						cout<<" ";
					break;
					default:
						cout<<" ";
						for(j=0;j<n;j++)cout<<" ";
						cout<<"|";
					break;
				}
				if(i!=l-1)
					cout<<" ";
			}cout<<endl;
		}
		//lower
		for(i=0;i<l;i++)
		{
			cout<<" ";
			switch(s[i])
			{
				case '1': case'4':case'7': for(j=0;j<n;j++)cout<<" ";
				break;
				default: for(j=0;j<n;j++)cout<<"-";
				break;
			}
			cout<<" ";
			if(i!=l-1)
				cout<<" ";
		}
		cout<<endl<<endl;
	}
	return 0;
}