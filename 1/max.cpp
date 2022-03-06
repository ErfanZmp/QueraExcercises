#include<iostream>
using namespace std;

int main()
{
    int n,max,inp;
    cin >> n;
    //int all[n];
    for (int i = 0; i < n; i++)
    {
        cin >> inp;
        if (i==0) max = inp;
        else if (inp > max) max = inp;
    }
    cout << max;
}