#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long N = 0, M = 0;

	cin >> N >> M;

	cout << abs(N - M);
}