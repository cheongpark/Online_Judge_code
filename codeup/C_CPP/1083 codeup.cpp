#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		if (i % 3 == 0)
			cout << "X";
		else
			cout << i;
		cout << " ";
	}
}
