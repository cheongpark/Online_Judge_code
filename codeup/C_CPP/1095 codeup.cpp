#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a = 0, in[10000] = {};
	cin >> a;
	for (int i = 0; i < a; i++)
		cin >> in[i];
	sort(in, in + a);
	cout << in[0];
}
