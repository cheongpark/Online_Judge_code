#include <iostream>
using namespace std;

int main()
{
	double a, b;
	cin >> a >> b;
	for (; a <= b; a += 0.01) 
	{
		cout << fixed;
		cout.precision(2);
		cout << a << " ";
	}
}
