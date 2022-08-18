#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0;
	cin >> a >> b;
	if (b % a != 0)
		cout << "none";
	else
		cout << a << "*" << b / a << "=" << b;
}
