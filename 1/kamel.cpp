#include<iostream>
using namespace std;
int main()
{
    long n,s=0;
    cin >> n;
    for (int i = 1; i <= n/2; i++) if(n%i == 0) s += i;
    if (n == s) cout << "YES";
    else cout << "NO";
}