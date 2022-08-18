#include <iostream>
using namespace std;

int main()
{
	int a[4] = { 0, }, num = 0;
	for (int i = 0; i < 4; i++)
		cin >> a[i];
	num = a[0] + a[1] + a[2] + a[3];
	switch (num)
	{
		case 0:
			cout << "모";
			break;
		case 1:
			cout << "도";
			break;
		case 2:
			cout << "개";
			break;
		case 3:
			cout << "걸";
			break;
		case 4:
			cout << "윷";
			break;
	}
}
