#include <iostream>

using namespace std;

int main() {
	int N = 0, M = 0;

	cin >> N >> M;

	cout << (M == 1 || M == 2 ? "NEWBIE!" : (M <= N ? "OLDBIE!" : "TLE!"));
}