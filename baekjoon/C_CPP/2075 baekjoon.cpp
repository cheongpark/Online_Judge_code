#include <iostream>
#include <queue>
#include <cstdio>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	priority_queue<int, vector<int>, greater<int>> q;
	int N = 0, qi = 0;

	cin >> N;

	for (int i = 0; i < N*N; i++) {
		cin >> qi;
		if(q.size() < N)
			q.push(qi);
		else {
			if (q.top() < qi) {
				q.pop();
				q.push(qi);
			}
		}
	}

	cout << q.top();
}