#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0, c = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
		if (i % 3 == 0)
			c += i;
	cout << c;
}
