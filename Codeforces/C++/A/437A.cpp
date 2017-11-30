#include <iostream>
#include <math.h> 
using namespace std;
int main() {
	string a,b,c,d;
	int choices[4];
	int mx=0,i,mi=101,ans_mx=0,ans_mi=0;
	int ind_mx,ind_mi;
	cin>>a>>b>>c>>d;
	choices[0]=a.size()-2;
	choices[1]=b.size()-2;
	choices[2]=c.size()-2;
	choices[3]=d.size()-2;
	
	for(i=0;i<4;i++)
	{
		if(choices[i]>mx)
		{
			mx=choices[i];
			ind_mx=i;
		}
		if(choices[i]<mi)
		{
			mi=choices[i];
			ind_mi=i;
		}
	}
	for(i=0;i<4;i++)
	{
		if(choices[i]/mi>=2 && ind_mi!=i)
		{
			ans_mi++;
		}
		if(mx/choices[i]>=2 && ind_mx!=i)
		{
			ans_mx++;
		}
	}
	if(ans_mx==3 && ans_mx!=ans_mi )
		cout<< char('A'+ind_mx);
	else if(ans_mi==3 && ans_mx!=ans_mi)
		cout<< char('A'+ind_mi);
	else cout<<"C";
	return 0;
}

