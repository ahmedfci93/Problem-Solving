/*
ID: ahmed.i3
PROG: friday
LANG: C++                  
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("friday.out");
    ifstream fin ("friday.in");
    int mon[12]={0,-1,0,1,0,1,0,0,1,0,1,0},index,day,y,i,j,res[12]={0};
    long rm=0;
	int r[7]={0};
	fin>>y;
	for(i=1900;i<1900+y;i++)
	{
		for(j=0;j<12;j++)
		{
			index=(rm+12);
			r[index%7] += 1;
			if(mon[j]==0)
				
				rm+=3;
				
			else if(mon[j]==1)
				
				rm +=2;
				
			else if((i % 4 == 0) && !(i % 100 == 0)|| i%400==0 )
			{	
				rm +=1;
				
			}
			else if(mon[j]==-1)
				rm+=0;
		}
		
	}
	for(i=0;i<6;i++)
	 fout<< r[(i+5)%7]<<" ";
	fout<< r[(6+5)%7]<<endl;
    return 0;
}