#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    char ask[n][2][12],ans[m][12];
    for (int i = 0; i < n; i++) cin >> ask[i][0] >> ask[i][1];
    for (int i = 0; i < m; i++) cin >> ans[i];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) if (strcmp(ask[j][0],ans[i]) == 0)
        {
            cout << ask[j][1] << " ";
            break;
        }
        cout << "kachal! ";
    }
    
}