#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0, v = 0, data = 0, count = 0;
	vector<int> iv;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> data;
		iv.push_back(data);
	}
	cin >> v;

	for (int i = 0; i < N; i++)
		if (iv[i] == v) count++;

	cout << count;
}