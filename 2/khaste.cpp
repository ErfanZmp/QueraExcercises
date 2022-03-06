#include<iostream>
using namespace std;
int main()
{
    int a,b,A=0,B=0,ta,tb;
    cin >> a >> b;
    ta = a;
    tb = b;
    while(ta>0)
    {
        A = A*10 + ta%10;
        B = B*10 + tb%10;
        ta /= 10;
        tb /= 10;
    } 
    if (A>B) cout << b << " < " << a;
    else if (A<B) cout << a << " < " << b;
    else cout << a << " = " << b;
    return 0;
}