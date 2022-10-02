#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N = 0, X[1000000] = {};
	
	cin >> N;
	for(int i = 0; i < N; i++)
		cin >> X[i];
	
	sort(X, X + N);
	
	for(int i = 0; i < N; i++)
		cout << X[i] << "\n";
}