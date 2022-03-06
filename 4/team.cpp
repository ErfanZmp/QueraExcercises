#include<iostream>
using namespace std;
int main()
{
    int a,b,s = 0;
    for (int i = 0; i < 3; i++)
    {
        cin >> a >> b;
        s += a <= b ? a : b;
    }
    cout << s;
    return 0;
}