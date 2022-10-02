#include <iostream>

using namespace std;

int main() {
	int N = 0, S = 0, a = 0, b = 0, count = 0;

	cin >> N;
	S = N;

	while (1)
	{
		a = N / 10;
		b = N % 10;

		N = (b * 10) + ((a + b) % 10);
		
		count++;

		if (S == N)
			break;
	}
	cout << count;
}