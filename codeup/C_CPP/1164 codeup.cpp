#include <iostream>
using namespace std;

int main()
{
	int a[3] = { 0, };
	cin >> a[0] >> a[1] >> a[2];
	for (int i = 0; i < 3; i++)
	{
		if (a[i] > 170)
			a[i] = 1;
		else
			a[i] = 0;
	}
	if (a[0] == 0 || a[1] == 0 || a[2] == 0)
		cout << "CRASH";
	else
		cout << "PASS";
}	
