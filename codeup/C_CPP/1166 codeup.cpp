#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	cin >> a;
	if ((a % 4 == 0) && (a % 100 != 0) || (a % 400 == 0))
		cout << "yes";
	else
		cout << "no";
}
