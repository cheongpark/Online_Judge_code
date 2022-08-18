#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct age_name
{
	int age;
	string name;
};

bool check(age_name x, age_name y)
{
	return x.age < y.age;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	age_name an[100000];
	int N = 0;

	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> an[i].age >> an[i].name;

	stable_sort(an, an + N, check);

	for (int i = 0; i < N; i++)
		cout << an[i].age << " " << an[i].name << "\n";
}