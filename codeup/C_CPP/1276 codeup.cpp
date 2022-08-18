#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 1;
	cin >> a;
	for (int i = 1; i <= a; i++)
		b *= i;
	cout << b;
}
