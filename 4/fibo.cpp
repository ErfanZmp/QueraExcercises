#include<iostream>
using namespace std;
void ShowFibNth(long int n, long int m)
{
    long int t;
    if(m==1)
    {
        cout << 1;
        return;
    }
    cout << n << "\n";
    t = m-n;
    m = n;
    n = t;
    ShowFibNth(n,m);
}
int main()
{
    long int n,m;
    cin >> n >> m;
    ShowFibNth(n,m);
    return 0;
}