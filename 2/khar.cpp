#include<iostream>
using namespace std;

int main()
{
    int a,b,l,s=0,flag=1;
    cin >> a >> b >> l;
    for (int i = 0; i < l; i++)
    {
        if(flag == 1) s += a;
        else s += b;
        flag *= -1;
    }
    cout << s;
    return 0;
}