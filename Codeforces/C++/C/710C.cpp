#include <iostream>
#include <stdio.h>
#include <set>
#include <vector>
#include <algorithm>
#include <string.h>
#include <string>
using namespace std;
 
#define sf scanf
#define pf printf
#define pb push_back
int n;
int mat[50][50];

int main() {
	int i,j,odd,even,s,e;
	odd=1;
	even=2;
	sf("%d",&n);
	if(n==1)pf("1");
	else
	{
		s=1,e=n-2;
		mat[0][n/2]=1;
		odd+=2;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(!mat[i][j])mat[i][j]=even,even+=2;
				else if(i<n/2&&mat[i][j])
				{
					if(!mat[i+1][j-1])mat[i+1][j-1]=odd,odd+=2;
					if(!mat[i+1][j])mat[i+1][j]=odd,odd+=2;
					if(!mat[i+1][j+1])mat[i+1][j+1]=odd,odd+=2;
				}
				else if(j>=s&&j<=e&&mat[i][j])
				{
					mat[i+1][j]=odd,odd+=2;
				}
			}
			if(i>=n/2)s++,e--;
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				pf("%d ",mat[i][j]);
			}
			pf("\n");
		}
	}
	
	return 0;
}