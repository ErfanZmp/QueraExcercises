#include<iostream>
using namespace std;
int main()
{
    int n,m=1,flag=0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (flag == 0)
        {
            for (int j = 0; j < (n-m)/2; j++) cout << " ";
            for (int j = 0; j < m; j++) cout << "*";
            for (int j = 0; j < (n-m)/2; j++) cout << "  ";
            for (int j = 0; j < m; j++) cout << "*";
            m = m+2;
            if (m==n) flag =1;
        }
        else
        {
            for (int j = 0; j < (n-m)/2; j++) cout << " ";
            for (int j = 0; j < m; j++) cout << "*";
            for (int j = 0; j < (n-m)/2; j++) cout << "  ";
            for (int j = 0; j < m; j++) cout << "*";
            m = m-2;
        }
        cout << endl;
    }
}

