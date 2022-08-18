#include <iostream>
using namespace std;

int main()
{
	int t[3] = {}, n = 0;
	for (int i = 0; i < 3; i++)
		cin >> t[i];
	for (int i = 0; i < 3; i++)
	{
		if (t[i] <= 170)
		{
			cout << "CRASH " << t[i];
			break;
		}
		else
			n++;
	}
	if (n == 3)
		cout << "PASS";
}
