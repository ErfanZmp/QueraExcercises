#include<iostream>
using namespace std;
void add(int &n)
{
    n = 10;
}
int main()
{
    int n;
    add(n);
    cout << n;
}