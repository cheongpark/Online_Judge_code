#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int N = 0, Num[1000] = {};

	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> Num[i];

	sort(Num, Num + N);

	for (int i = 0; i < N; i++)
		cout << Num[i] << "\n";
}