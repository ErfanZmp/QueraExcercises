#include<iostream>
using namespace std;
unsigned long long bmm(unsigned long long a,unsigned long long b)
{
    unsigned long long p=b%a;
    if(p==0) return a;
    b = a;
    a = p;
    return bmm(a,b);
}
int main()
{
    unsigned long long a,b,t,p;
    cin >> a >> b;
    if (a>b)
    {
        t = a;
        a = b;
        b = t;
    }
    cout << bmm(a,b);
}
