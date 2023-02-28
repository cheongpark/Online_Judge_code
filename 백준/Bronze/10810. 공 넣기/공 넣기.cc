#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n = 0, m = 0, ball = 0, i = 0, j = 0, k = 0;

	cin >> n >> m;

	vector<int> balls(n); //바구니 개수 초기화

	for (int insert = 0; insert < m; insert++) {
		cin >> i >> j >> k;
		for (int pos = i - 1; pos <= j - 1; pos++)
			balls[pos] = k;
	}

	for (int num : balls)
		cout << num << " ";
}