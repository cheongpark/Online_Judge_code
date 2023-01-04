#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	vector<int> values;
	int value = 0;

	for (int i = 0; i < 5; i++) {
		cin >> value;
		values.push_back(value);
	}

	sort(values.begin(), values.end());

	cout << (values[0] + values[1] + values[2] + values[3] + values[4]) / 5 << endl;
	cout << values[2];
}