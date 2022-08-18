#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	cin >> a;
	for (int i = a; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
			cout << i << " ";
		cout << endl;
	}
}
