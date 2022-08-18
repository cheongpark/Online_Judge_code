#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a = 0, n[10000] = {};
	cin >> a;
	for (int i = 0; i < a; i++)
		cin >> n[i];
	sort(n, n + a);
	for (int i = 0; i < a; i++)
		cout << n[i] << endl;
}
