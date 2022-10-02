#include <iostream>

using namespace std;

int main() {
	int T = 0, s[16] = {}, sum = 0;

	cin >> T;

	for (int i = 0; i < T; i++) {
		sum = 0;
		for (int j = 0; j < 16; j++) {
			scanf("%1d", &s[j]);
			if (j % 2 == 0) {
				s[j] *= 2;
				s[j] = (s[j] / 10) + (s[j] % 10);
			}
			sum += s[j];
		}
		cout << (sum % 10 == 0 ? "T" : "F") << "\n";
	}
}