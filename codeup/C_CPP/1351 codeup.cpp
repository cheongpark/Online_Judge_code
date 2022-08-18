#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
		for (int j = 1; j <= 9; j++)
			cout << i << "*" << j << "=" << i * j << endl;
}
