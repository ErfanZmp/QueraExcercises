#include<iostream>
using namespace std;
int main()
{
    double n,k,s = 0,t;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        s += t;
    }
    cout << (int) (n - (s/k));
    return 0;
}