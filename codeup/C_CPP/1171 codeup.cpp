#include <iostream>
using namespace std;

int main()
{
	int a[3] = { 0, };
	cin >> a[0] >> a[1] >> a[2];
	cout << a[0] * 100000 + a[1] * 1000 + a[2];
}
