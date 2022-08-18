#include <iostream>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int a = 0, b = 0, t = 0;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		cout << a + b << "\n";
	}
}