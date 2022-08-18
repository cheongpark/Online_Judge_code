#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a = 0, n[1000] = {};
	cin >> a;
	for (int i = 0; i < a; i++)
		cin >> n[i];
	sort(n, n + a);
	cout << n[a - 1];
}
