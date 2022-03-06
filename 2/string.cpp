#include<iostream>
#include<string>
using namespace std;

int main()
{
    char x[10];
    cin >> x;
    int n = 0;
    while(x[n]!=0) n++;
    cout << n;
}