#include<iostream>
using namespace std;
int main()
{
    long double n,k;
    cin >> n >> k;
    for (int i = 0; i < k; i++) n/=2;
    if (n>=0) cout << (long long) n;
    else if (((long long) n) == n) cout << (long long) n;
    else cout << (long long) n-1 ;
    return 0;
}