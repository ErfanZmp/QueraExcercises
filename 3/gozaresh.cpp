#include<iostream>
using namespace std;
int main()
{
    long n,k,h,s=0;
    cin >> n >> k;
    while(--n >=0)
    {
        cin >> h;
        s+=h;
    }
    if(s>=k) cout << "YES";
    else cout << "NO";
}