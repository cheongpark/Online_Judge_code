#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;

	cin >> s;

	for (int i = 0; i < s.length(); i++)
		s[i] = (s[i] <= 90 ? s[i] + 32 : s[i] - 32); //문자만 입력되고 구분만 하면되서 90이하꺼 찾기

	cout << s;
}