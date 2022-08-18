#include <iostream>
#include <string.h>

using namespace std;

int main() {
	int N = 0;
	
	cin >> N;

	for (int i = 0; i < N; i++) {
		char a[80] = {};
		int sum = 0, cnt = 0;

		cin >> a;

		for (int j = 0; j < strlen(a); j++) {
			a[j] == 'O' ? cnt++ : cnt = 0;
			sum += cnt;
		}
		cout << sum << "\n";
	}
}