#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a[3] = {};
	cin >> a[0] >> a[1] >> a[2];
	if (a[2] >= (a[1] + a[0]))
		cout << "삼각형아님";
	else if (a[0] == a[1] && a[1] == a[2])
		cout << "정삼각형";
	else if (a[0] == a[1] || a[1] == a[2])
		cout << "이등변삼각형";
	else if ((pow(a[0], 2) + pow(a[1], 2)) == pow(a[2], 2))
		cout << "직각삼각형";
	else
		cout << "삼각형";
}
