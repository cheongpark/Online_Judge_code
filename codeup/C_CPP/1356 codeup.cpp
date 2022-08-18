#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	cin >> a;
	for (int i = 0; i < a; i++)
		cout << "*";
	cout << endl;
	for (int i = 0; i < a - 2; i++)
	{
		cout << "*";
		for (int k = 0; k < a - 2; k++)
			cout << " ";
		cout << "*" << endl;
	}
	for (int i = 0; i < a; i++)
		cout << "*";
}
