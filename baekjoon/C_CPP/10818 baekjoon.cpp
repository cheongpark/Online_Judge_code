#include <iostream>

#define min 1000000
#define max -1000000

using namespace std;

int main()
{
	int n = 0, x = 0, mn = min, mx = max;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x <= mn) //min 값 찾기
			mn = x;
		if (x >= mx) //max 값 찾기
			mx = x;
	}
	cout << mn << " " << mx;
}