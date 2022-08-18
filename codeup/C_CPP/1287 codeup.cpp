#include <iostream>
using namespace std;

int main()
{
	int x = 0;
	cin >> x;
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 0; j < x * i; j++)
			cout << "*";
		cout << endl;
	}
}
