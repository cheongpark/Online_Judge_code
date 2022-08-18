#include <iostream>
using namespace std;

int main()
{
	int num = 0, a[23] = {}, b = 0;
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cin >> b;
		a[b - 1]++;
	}
	for (int i = 0;i < 23; i++)
		cout << a[i] << " ";
}
