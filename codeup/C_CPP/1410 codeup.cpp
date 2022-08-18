#include <iostream>
using namespace std;

int main()
{
	char a[1000000] = {};
	int n[42] = {};
	cin.getline(a, 1000000);
	for (int i = 0; i < 1000000; i++)
		n[(int)a[i]]++;
	cout << n[40] << " " << n[41];
}
