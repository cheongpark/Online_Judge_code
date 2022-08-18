#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0, num = 0;
	char c = ' ';
	cin >> a >> c >> b;
	switch (c)
	{
		case '+':
			cout << a + b;
			break;
		case '-':
			cout << a - b;
			break;
		case '*':
			cout << a * b;
			break;
		case '/':
			cout << fixed;
			cout.precision(2);
			cout << (double)a / (double)b;
			break;
	}
}
