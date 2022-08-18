#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0, c = 0;
	cin >> a >> b;
	for (int i = a; i > 0; i--)
	{
		for (int j = 0; j < b; j++)
			cout << (i * b) - j << " ";
		cout << endl;
	}
}
