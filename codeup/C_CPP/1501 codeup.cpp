#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 1;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			cout << b << " ";
			b++;
		}
		cout << endl;
	}
}
