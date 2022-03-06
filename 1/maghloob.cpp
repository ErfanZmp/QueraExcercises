#include<iostream>
using namespace std;
int main()
{
    long n,reversed=0,temp;
    cin >> n;
    temp = n;
    while (temp >0)
    {
        reversed *= 10;
        reversed += temp%10;
        temp /= 10;
    }
    if (n == reversed) cout << "YES";
    else cout << "NO";
}