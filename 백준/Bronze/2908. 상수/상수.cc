#include <iostream>

using namespace std;

int main()
{
	int A = 0, B = 0;

	cin >> A >> B;

	A = ((A % 10) * 100) + (((A / 10) % 10) * 10) + (A / 100);
	B = ((B % 10) * 100) + (((B / 10) % 10) * 10) + (B / 100);

	cout << (A < B ? B : A);
}