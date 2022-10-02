#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n = 0;

	cin >> n;
	for (int i = n; i >= 1; i--)
		cout << i << "\n";
}