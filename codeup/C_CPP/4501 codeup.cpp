#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n[100] = {};
	for (int i = 0; i < 7; i++)
		cin >> n[i];
	sort(n, n + 7);
	cout << n[6] << endl << n[5];
}
