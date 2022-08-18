#include <iostream>

using namespace std;

int main()
{
	int x = 0, mx = 0, n = 0;

	for (int i = 1; i <= 9; i++) {
		cin >> x;
		if (x >= mx) {
			mx = x;
			n = i;
		}
	}
	cout << mx << endl << n;
}