#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0, t = 0;

	cin >> t;

	for (int i = 1; i <= t; i++) {
		cin >> a >> b;
		cout << "Case #" << i << ": " << a + b << endl;
	}
}