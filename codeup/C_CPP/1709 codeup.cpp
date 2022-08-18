#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a = 0, n[100] = {};
	cin >> a;
	for (int i = 0; i < a; i++)
		cin >> n[i];
	sort(n, n + a);
	for (int i = a; i > 0; i--)
		cout << n[i-1] << " ";
}
