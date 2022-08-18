#include <iostream>

using namespace std;

void b_2x1(int k, int l);

int sum = 0;

int main()
{
	int a = 0;
	cin >> a;
	b_2x1(0, a);
	cout << sum;
}

void b_2x1(int k, int l)
{
	if (k > l)return;
	if (k == l)
	{
		sum++;
		return;
	}

	b_2x1(k + 1, l);
	b_2x1(k + 2, l);
}
