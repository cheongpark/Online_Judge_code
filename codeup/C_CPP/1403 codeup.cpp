#include <iostream>
using namespace std;

int main()
{
	int a[100] = {}, n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
		cout << a[i] << endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << endl;
}
