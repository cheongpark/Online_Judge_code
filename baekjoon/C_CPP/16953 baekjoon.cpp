#include <iostream>

using namespace std;

int main() {
	int A = 0, B = 0, cnt = 1;

	cin >> A >> B;

	while (1) {
		if (A == B) break;
		if (A > B) {
			cnt = -1;
			break;
		}
		else if (B % 2 == 0) B /= 2;
		else if (B % 10 == 1) B /= 10;
		else {
			cnt = -1;
			break;
		}
		cnt++;
	}
	cout << cnt;
}