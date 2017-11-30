#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	
	int count;
	int i , num2;
	char operat;
	int num;
	int num1;
	cin >> count;
	for ( i = 0; i < count; i++)
	{
		num2 = 1;
		cin >> num1;
		while (num2 == 1)
		{
			cin >> operat;
			switch (operat)
			{
				
			case '+':
				cin >> num;
				num1 = num1 + num ;
				break;
			case '-':
				cin >> num;
				num1 = num1 - num;
				break;
			case '/':
				cin >> num;
				num1 = num1 / num;
				break;
			case'*':
				cin >> num;
				num1 = num * num1;
				break;
			case ' ':
				break;
			case '=':
				num2 = 0;
				break;
			}
			
		}
		cout<<num1<<endl;
	}
	system("puase");
	return 0;

}