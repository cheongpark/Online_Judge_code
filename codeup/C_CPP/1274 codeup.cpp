#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	bool prime = true;
	cin >> a;
	for (int i = 2; i < a; i++)
		if (a % i == 0)
		{
			prime = false;
			break;
		}
	if (prime == true)
		cout << "prime";
	else
		cout << "not prime";
}
