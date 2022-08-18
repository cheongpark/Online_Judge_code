#include <iostream>
using namespace std;

int main()
{
	int a[100][100] = {}, h = 0, w = 0, n = 0, l = 0, d = 0, x = 0, y = 0;
	cin >> w >> h >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> l >> d >> y >> x;
		if (d == 0)
			for (int j = 0; j < l; j++)
			{
				a[x-1][y-1] = 1;
				x++;
			}
		if (d == 1)
			for (int j = 0; j < l; j++)
			{
				a[x-1][y-1] = 1;
				y++;
			}
	}
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < h; j++)
			cout << a[j][i] << " ";
		cout << endl;
	}
}
