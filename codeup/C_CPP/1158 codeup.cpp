#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	if ((a >= 30 && a <= 40) || (a >= 60 && a <= 70))
		cout << "win";
	else
		cout << "lose";
}
