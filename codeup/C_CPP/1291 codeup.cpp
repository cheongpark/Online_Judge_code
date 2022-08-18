#include <iostream>

using namespace std;

int main() 
{
	int a[3] = {}, sum = 0;
	for (int i = 0; i < 3; i++)
		cin >> a[i];

	for (int i = 1; i <= 3000; i++)
		if (a[0] % i == 0 && a[1] % i == 0 && a[2] % i == 0)
			sum = i;

	cout << sum;
}
