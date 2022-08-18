#include <iostream>
using namespace std;

int main()
{
	int a = 0, n = 0;
	cin >> a;
	for (int i = 1; i <= a; i++) if (i % 2 == 0) n = n + i;
	cout << n;
}
