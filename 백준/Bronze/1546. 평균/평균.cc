#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n = 0, m = 0, test = 0;
	double result = 0;
	vector<double> tests;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> test;
		tests.push_back(test);
	}

	m = *max_element(tests.begin(), tests.end());

	for (double& fixtest : tests) {
		fixtest = fixtest / m * 100;
		result += fixtest;
	}

	cout << result / n;
}