#include <iostream>
using namespace std;

int main()
{
	int i = 0, a = 0, num = 0;
	cin >> a;
	while (1)
	{
		num += i;
		if (num >= a)
			break;
		i++;
	}
	cout << num;
}
