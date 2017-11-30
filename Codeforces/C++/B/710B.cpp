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
int in[300000];

int main() {
	int i,j;
	sf("%d",&n);
	for(i=0;i<n;i++)sf("%d",&in[i]);
	sort(in,in+n);
	pf("%d",(n%2)?in[(n)/2]:in[n/2-1]);
	return 0;
}