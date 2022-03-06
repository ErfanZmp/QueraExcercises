#include<iostream>
#include<string>
using namespace std;
string check(int t)
{
    if(t>100) return "Steam";
    if(t<0) return "Ice";
    return "Water";
}
int main()
{
    int t;
    cin >> t;
    cout << check(t);
}