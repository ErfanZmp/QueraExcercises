#include<iostream>
using namespace std;
int main()
{
    int n,m,s = 0,x,y;
    cin >> n >> m;
    int all[n][n];
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> all[i][j];
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        s += all[x-1][y-1];
    }
    cout << s;
    return 0;
}