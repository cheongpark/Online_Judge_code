#include <iostream>
using namespace std;

int main()
{
	int a[2], b;
	cin >> a[0] >> a[1];
	if (a[0] % 2)
		cout << "홀수";
	else
		cout << "짝수";
	cout << "+";
	if (a[1] % 2)
		cout << "홀수";
	else
		cout << "짝수";
	cout << "=";
	b = a[0] + a[1];
	if (b % 2)
		cout << "홀수";
	else
		cout << "짝수";
}
