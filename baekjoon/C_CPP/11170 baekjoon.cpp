#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T = 0, N = 0, M = 0;

	cin >> T;

	for (int i = 0; i < T; i++) {
		int X = 0, cnt = 0;
		cin >> N >> M;

		for (int i = N; i <= M; i++) {
			X = i;
			cnt += (X == 0 ? 1 : 0);
			while (X) {
				cnt += (X % 10 == 0 ? 1 : 0);
				X /= 10;
			}
		}
		cout << cnt << endl;
	}
}