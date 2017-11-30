#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int t,num,i,mini;//time number,number(1,2,3),icounter,minimum
	vector<int> v[4];
	cin>>t;
	for(i=1;i<=t;i++)
	{
		cin>>num;
		v[num].push_back(i);
	}
	mini = min(v[1].size(), v[2].size());
    mini = min(mini,(int) v[3].size());//(int) v[3] cause mini has int data type and size() is size_t,so min() must be (int&,int&)
	if(mini)
	{
		cout<<mini<<endl;
		for(i=0;i<mini;i++) 
			cout<<v[1][i]<<" "<<v[2][i]<<" "<<v[3][i]<<endl;
	}
	else cout<<mini;
		
	return 0;
}