#include<iostream>
using namespace std;
int main()
{
    char a[25];
    for (int i = 0; i < 25; i++) a[i] = '@';
    int count = 0;
    cin >> a;
    for (int i = 0; i < 25; i++) if(a[i] != '@') count++;
    count--;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < i; j++) a[j] = a[i];
        cout<<a<<endl;
    }
    return 0;
}