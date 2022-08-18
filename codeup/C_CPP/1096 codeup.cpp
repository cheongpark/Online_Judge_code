#include <iostream>
using namespace std; 

int main()
{
    int num = 0, x = 0, y = 0, a[19][19] = { 0,};
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        cin >> x >> y;
        a[x - 1][y - 1] = 1;
    }
    for(int i = 0; i < 19; i++)
    {
        for(int j = 0; j < 19; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}
