#include <iostream>
using namespace std;

int main()
{
	int a = 0, n = 0, s1 = 0, s2 = 0;
	cin >> a;
	for (int i = 1; i <= a; i++)
		n += i;
	for (int i = 0; i < a - 1; i++)
	{
		cin >> s1;
		s2 +=s1;
	}
	cout << n - s2;
}
