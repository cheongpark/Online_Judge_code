#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> list;
	int n = 0, data = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> data;
		list.push_back(data);
	}

	cout << *min_element(list.begin(), list.end()) << " " << *max_element(list.begin(), list.end());

}
