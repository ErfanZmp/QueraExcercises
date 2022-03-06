#include<iostream>
using namespace std;
int main()
{
    int n;
    string name;
    cin >> n >> name;
    for (int i = 0; i < n; i++) cout << "copy of ";
    cout << name;
    return 0;
}