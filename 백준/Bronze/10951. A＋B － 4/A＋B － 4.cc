#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0;

	while (1) {
		cin >> a >> b;
		if (cin.eof()) break;
		cout << a + b << endl;
	}
}