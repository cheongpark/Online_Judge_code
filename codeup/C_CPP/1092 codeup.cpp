#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0, c = 0, day = 1;
	cin >> a >> b >> c;
	while (day % a != 0 || day % b != 0 || day % c != 0)
		day++;
	cout << day;
}
