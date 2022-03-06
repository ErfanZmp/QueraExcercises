#include<iostream>
using namespace std;

int main()
{
    int x,m=1,n=1,out;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        if(i==1) cout << "+";
        else
        {
            while(out < i)
            {
                out = m+n;
                m = n;
                n = out;
            }
            if (out == i) cout << "+";
            else cout << "-";
        }
    }
    return 0;
}