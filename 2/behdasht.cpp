#include<iostream>
using namespace std;
int main()
{
    int x,n;
    cin >> x >> n;
    if (n==0) cout << 20;
    else if (n == 7) cout << x;
    else
    {
        for (int i = 0; i < n; i++)
        {
            x--;
            if(x<=0)
            {
                x=0;
                break;
            } 
        }
        cout << x;
    }
    return 0;
}