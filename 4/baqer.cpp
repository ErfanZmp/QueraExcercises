#include<iostream>
using namespace std;
int main()
{
    int n,l,s=0,d,r,g,t,f=0,len;
    bool check;
    cin >> n >> l;
    while(n--)
    {
        check = true;
        cin >> d >> r >> g;
        len = d-f;
        l -= len;
        f = d;
        s += len;
        t = r;
        t -= s;
        while(t<=0)
        { 
            if(check)
            {
                t += g;
                check = false;
                continue;
            }
            t += r;
            check = true;
        }
        if(check) s += t; 
    }
    cout << s + l << endl;
}