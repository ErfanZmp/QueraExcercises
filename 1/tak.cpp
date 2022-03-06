#include<iostream>
using namespace std;
int main()
{
    unsigned long n ,s,temp;
    cin >> n;
    while (n>=10)
    {
        temp = n;
        s = 0;
        while (temp > 0)
        {
            s += temp%10;
            temp = temp/10;
        }
        n = s;
    }
    cout << n;
}
