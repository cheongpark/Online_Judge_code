#include <iostream>

using namespace std;

int main()
{
	int A = 0, B = 0, C = 0, num = 0, save[10] = {};

	cin >> A >> B >> C;

	num = A * B * C;

	while (num) {
		save[num % 10] += 1;
		num /= 10;
	}

	for (int i = 0; i < 10; i++)
		cout << save[i] << endl;
}