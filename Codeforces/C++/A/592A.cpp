#include <iostream>
#include <cstdlib>
#include <math.h>
#include <vector>
#include <stdio.h>
#include <string>
#include <algorithm>
#define sf scanf
#define pf printf
using namespace std;
int main()
{
	int i, j, bp, wp, bmx = -1, wmi = 9;//wmx(white max),bmi(black min),bp(black position),wp(white position)
	string s ;
	char ft, ls;//ft(first char),ls(last char)
	vector <string> bo;//bo(board)
	for (i = 0; i<8; i++)
	{
		cin >> s;
		bo.push_back(s);
	}
	for (i = 0; i < 8; i++)
	{
		ft = '.', ls = '.';
		wp = 9;
		for (j = 0; j < 8; j++)
		{
			if (ft == '.')
				ft = bo[j][i];
			if (bo[j][i] != '.')
				ls = bo[j][i];
			if (bo[j][i] == 'B')
			{
					bp = j+1;
			}
			if (bo[j][i] == 'W')
			{
				wp = min(wp, j+1);
			}
		}
		if (ft == 'B'&&ls == 'B')
			bmx = max(bmx, bp);
		else if (ft == 'W'&&ls == 'W')
			wmi = min(wmi, wp);
		else if (ft != 'B'&&ls != 'w')
			{
				bmx = max(bmx, bp);
				wmi = min(wmi, wp);
			}
	}
	if (8 - bmx<wmi-1)//know reminder steps of black(8-7=1),and of white (2-1=1) 
		cout << "B";
	else cout << "A";
	return 0;
}