#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
	int m,n,a,b,t,cost,cost2;
	cin>>n>>m>>a>>b;
	double d=(double)n/m;
	t=n%m;
	cost2=t*a+ ((n-t)/m) *b;//combination cost of n,m
	cost = ceil(d)*b;//cost of m
	cost=min(n*a,cost);//minimum cost between m,n
	cout<<min(cost,cost2);
	return 0;
}