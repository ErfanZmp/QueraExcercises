#include<iostream>
using namespace std;
int main()
{
    long n,i,temp,ten,t,check,b,c;
    cin >> n >> b >> c;
    i = 1;
    temp = n;
    ten = 0;
    while(temp>0)
    {
        ten += (temp%10)*i;
        temp/=10;
        i *=b;
    }
    i = 1;
    n = ten;
    t = n;
    check = 0;
    while(i<n)
    {
        i = i*c;
        temp = n;
        while(temp>=i) temp = temp/c;
        if(temp%c != t%c)
        {
            check = 1;
            break;
        }
        t/=c;
    }
    if (check == 0) cout << "YES";
    else cout << "NO";
    return 0;
}
