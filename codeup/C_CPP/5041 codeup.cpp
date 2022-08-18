#include <iostream>

#define dx 10000

using namespace std;

int main() {
	int L, N, T, di[dx], xi[dx], num = 0;
    cin >> L >> N >> T;

	for (int i = 0; i < N; i++)
        cin >> di[i] >> xi[i];

	for (int i = 0; i < N; i++)
		xi[i] += T * di[i];

	for (int i = 0; i < N; i++)
		if (xi[i] >= 0 && xi[i] <= L)
			num++;

    cout << num;
}