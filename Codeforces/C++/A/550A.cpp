#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main() {
	char s [100000];
	char *p;//pointer
	scanf("%s",s);
	p=strstr(s,"AB");/*strstr(s,s2) return A pointer to the first occurrence in s of the entire sequence of characters specified in s2, or a null 									pointer if the sequence is not present in s.*/
	if(p && strstr(p+2,"BA"))//p+2 to start after s2(AB) to find (BA)
		cout<<"YES";
	else{
		p=strstr(s,"BA");
		if(p && strstr(p+2,"AB"))
		cout<<"YES";
		else
		cout<<"NO";
	}
	return 0;
}