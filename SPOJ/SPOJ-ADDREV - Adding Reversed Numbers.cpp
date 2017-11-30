#include <iostream>
#include <cmath>
using namespace std;

double rev(int num);


int main()
{
	int count, num1, r2,j,i;
	double r, r1=0;
	cin >> count;
	if(count<=10000)
    {
	for (i = 0; i < count; i++)
	{
		for (j = 0; j < 2; ++j)
		{
			cin >> num1;
			r = rev(num1);
			r1 = r + r1;
		}
		r2 =(int) rev(r1);
		cout << r2 << endl;
		r1 = 0;
	}
    }
	return 0;
}

double rev(int num)
{
	int x0, x1, a[10], x2, j, c, r=0, i = 0;
	double  r1 = 0;
	x0 = num;
	while ((x0 / 10) != 0)
	{
		x1 = x0 / 10;
		x2 = x1 * 10;
		r = x0 - x2;
		x0 = x1;
		a[i] = r;
		i++;
	}
	a[i] = x0;
	r = r + x0;
	c = i;
	for (j = 0; j <= i; j++)
	{
		r1 = (double)r1 + (a[j] * pow(10, c));
		c--;
	}
	return r1;
}
