#include<iostream>
using namespace std;
int count(int n,int a[],int b[][75])
{
    int temp[n];
    int s = 0;
    for(int i = 0; i<n ;i++)
    { 
        temp[i] = 0;
        if(a[i] || b[i])
        { 
            s++;
            temp[i] = 1;
        }
    }
    return s;
}
int main()
{
    int n;
    string line;
    cin >> n;
    int kill[n][n],temp[n];
    for (int i = 0; i < n; i++)
    { 
        cin >> line;   
        for (int j = 0; j < n; j++)
        { 
            if(line[j]=='1') kill[i][j] = 1;
            else kill[i][j] = 0;
        }
        kill[i][i] = 1;
    }
    for (int i = 0; i < n; i++)
    { 
        cout << i << " covers ";
        for (int j = 0; j < n; j++)
        { 
            if(kill[i][j] == 1) cout << j << ",";
        }
        cout << "\n";
    }
    for (int i = 0; i < n-1; i++)
    { 
        for (int j = i+1; j < n; j++)
        { 
            if (i==j) continue;
            if(count(kill[i],kill[j],n) == n) cout << i << " and " << j << " are possible.\n";
            // cout << i << " and " << j << " cover " << count(kill[i],kill[j],temp,n) << "\n";
        }
    }
}