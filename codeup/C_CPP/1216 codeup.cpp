#include <iostream>
using namespace std;

int main()
{
	int sum = 0, hx = 0, ho = 0, hm = 0;
	cin >> hx >> ho >> hm;
	sum = ho - hm;
	if (sum < hx)
		cout << "do not advertise";
	if (sum > hx)
		cout << "advertise";
	if (sum == hx)
		cout << "does not matter";
}
