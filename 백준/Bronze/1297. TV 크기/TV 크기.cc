#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int D = 0, H = 0, W = 0;

	cin >> D >> H >> W;

	cout << (int)(H * (D / sqrt(pow(H, 2) + pow(W, 2)))) << " " << (int)(W * (D / sqrt(pow(H, 2) + pow(W, 2))));
}