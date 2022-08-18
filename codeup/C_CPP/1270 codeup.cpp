#include <iostream>
using namespace std;

int main()
{
	int a = 0, count = 0;
	cin >> a;
	for (int i = 1; i <= a; i++)
		if ((i % 10) == 1)
			count++;
	cout << count;
}
