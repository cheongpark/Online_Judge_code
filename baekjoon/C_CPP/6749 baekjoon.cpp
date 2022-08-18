#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int min = 0, mid = 0;

	cin >> min >> mid;

	cout << (mid - min) + mid;
}