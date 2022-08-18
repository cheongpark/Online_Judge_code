#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	if (a >= 50 && a <= 70)
		cout << "win";
	else if (a % 6 == 0)
		cout << "win";
	else
		cout << "lose";
}
