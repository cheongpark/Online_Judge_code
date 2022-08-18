#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int H = 0, M = 0;

	cin >> H >> M;

	M -= 45;
	if (M < 0) {
		M += 60;
		H -= 1;

		if (H < 0)
			H = 23;
	}

	cout << H << " " << M;
}