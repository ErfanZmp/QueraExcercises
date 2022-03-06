#include<iostream>
using namespace std;
int main()
{
    int k,s=0;
    cin >> k;
    for (int i = 0; i < k; i++) s+=i+1;
    cout << s;
    return 0;
}