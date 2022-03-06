#include<iostream>
using namespace std;
int count(char c[])
{
    int len = 0,s=0;
    while(c[len]!=0) len++;
    for (int i = 0; i < len-1; i++) for (int j = i+1; j  < len; j++) if(c[i]==c[j]) c[j] = '-';
    for (int i = 0; i < len; i++) if (c[i]!='-') s++;
    return s;
}
int main()
{
    int n;
    cin >> n;
    char c[25];
    int max = 0;
    while(--n>=0)
    {
        cin >> c;
        if(count(c)>max) max = count(c);
    }
    cout << max;
    return 0;
}