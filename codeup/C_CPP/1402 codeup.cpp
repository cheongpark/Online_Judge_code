#include <iostream>
using namespace std;

int main()
{
	int num = 0, a[1000] = { 0, };
	cin >> num;
	for (int i = 0; i < num; i++)
		cin >> a[i];
	for (int i = num - 1; i >= 0; i--)
		cout << a[i] << endl;
}
