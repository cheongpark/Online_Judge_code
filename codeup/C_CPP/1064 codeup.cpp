#include <iostream>
using namespace std;

int main()
{
	int a[3],b;
	cin >> a[0] >> a[1] >> a[2];
	b = a[0] < a[1] ? a[0] : a[1];
	b = b < a[2] ? b : a[2];
	cout << b;
}
