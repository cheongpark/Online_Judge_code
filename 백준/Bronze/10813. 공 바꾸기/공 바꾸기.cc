#include <iostream>
#include <vector>

using namespace std;

void swap(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}

int main() {
	int n = 0, m = 0, p1 = 0, p2 = 0;
	vector<int> balls;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
		balls.push_back(i + 1);

	for (int i = 0; i < m; i++) {
		cin >> p1 >> p2;
		swap(balls[p1 - 1], balls[p2 - 1]);
	}

	for (int num : balls)
		cout << num << " ";
}