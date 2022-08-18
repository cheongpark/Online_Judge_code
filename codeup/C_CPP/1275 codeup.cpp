#include <iostream>
using namespace std;

int main()
{
	long long n = 0, k = 0, num = 1;
	cin >> n >> k;
	for (int i = 0; i < k; i++)
		num *= n;
	cout << num;
}
