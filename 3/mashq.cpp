#include<iostream>
using namespace std;
bool mosalas(int a,int b,int c)
{
    if(a>0 && b>0 && c>0 && a+b+c == 180) return true;
    return false;
}
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(mosalas(a,b,c)) cout << "Yes";
    else cout << "No";
    return 0;
}