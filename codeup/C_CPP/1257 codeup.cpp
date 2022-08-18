#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0;
	cin >> a >> b;
	for (a; a <= b; a++) if (a % 2 == 1) cout << a << " ";
}
