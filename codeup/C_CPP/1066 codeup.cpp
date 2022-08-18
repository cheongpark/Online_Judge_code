#include <iostream>
using namespace std;

int main()
{
	int a[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> a[i];
		if (a[i] % 2)
			cout << "odd" << endl;
		else
			cout << "even" << endl;
	}
}
