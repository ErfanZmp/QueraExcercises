#include<iostream>
using namespace std;
int main()
{
    int n,m,s=0;
    cin >> n >> m;
    char A[n][m];
    for (int i = 0; i < n; i++) for (int j = 0; j < m; j++)
    {
        cin >> A[i][j];
        if (A[i][j] == '*') s++;
    }
    cout << s;
    return 0;
}