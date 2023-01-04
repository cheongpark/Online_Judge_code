#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(int x, int y) {
	return x > y;
}

int main() {
	int N = 0, k = 0, score = 0;
	vector<int> scores;

	cin >> N >> k;

	for (int i = 0; i < N; i++) {
		cin >> score;
		scores.push_back(score);
	}

	sort(scores.begin(), scores.end(), cmp);

	cout << scores[k - 1];
}