#include <iostream>
using namespace std;

int main()
{
	int a;
	for (int i = 0; i < 10; i++)
	{
		cin >> a;
		if ((a % 5) == 0)
		{
			cout << a;
			return 0;
		}
	}
	cout << "0";
}
