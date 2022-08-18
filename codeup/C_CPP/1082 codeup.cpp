#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> hex >> a;
	for (int i = 1; i <= 15; i++)
		cout << hex << uppercase << a << "*" << hex << uppercase << i << "=" << hex << uppercase << a * i << endl;
}
