#include <iostream>
using namespace std;

int main()
{
	int a[10] = {}, n = 0;
	for (int i = 0; i < 10; i++)
		cin >> a[i];
	cin >> n;
	cout << a[n - 1];
}
