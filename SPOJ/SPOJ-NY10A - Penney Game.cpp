#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	int x, TTT , TTH , THT , THH , HTT , HTH , HHT , HHH ;
	int num;
	cin >> x;
	for (int i = 0; i < x; i++)
	{
		TTT = 0, TTH = 0, THT = 0, THH = 0, HTT = 0, HTH = 0, HHT = 0, HHH = 0;
		cin >> num;
		cin >> s;
		for (int k=0; k < 38; k++)//Less than 38 means 37
		{
			if (s[k] == s[k + 1]&&s[k] == s[k + 2] )
			{
				if (s[k] == 'H')
					HHH++;
				else
					TTT++;
			}
			else if (s[k] == s[k + 1] && s[k]!= s[k + 2])
			{
				if (s[k] == 'H')
					HHT++;
				else
					TTH++;
			}

			else if (s[k] == s[k + 2] && s[k]!= s[k + 1])
			{
				if (s[k] == 'T')
					THT++;
				else
					HTH++;
			}
			else if (s[k + 1] == s[k + 2] && s[k + 1] != s[k])
			{
				if (s[k] == 'H')
					HTT++;
				else
					THH++;
			}
		}
		cout << num << ' ' << TTT << ' ' << TTH << ' ' << THT << ' ' << THH << ' ' << HTT << ' ' << HTH << ' ' << HHT << ' ' << HHH << endl;
	}
	return 0;
}
