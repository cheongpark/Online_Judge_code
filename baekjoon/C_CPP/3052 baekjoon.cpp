#include <iostream>

using namespace std;

int main()
{
	int A = 0, sum = 0, save[42] = {};
	for(int i=0;i<10;i++) {
		cin >> A;
		save[A % 42]++;
	}
	
	for (int i = 0; i < 42; i++)
		sum += save[i] != 0 ? 1 : 0;
	cout << sum;
}