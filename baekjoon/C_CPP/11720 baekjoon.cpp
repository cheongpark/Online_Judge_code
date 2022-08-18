#include <iostream>

using namespace std;

int main() {
	int N = 0, sum = 0;
	char X[101] = {};

	cin >> N >> X;

	for (int i = 0; i < N; i++)
		sum += X[i] - '0';

	cout << sum;
}