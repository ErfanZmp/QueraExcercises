#include<iostream>
#include<string.h>
using namespace std;
int count(string c)
{
    int len = c.length(),s=0;
    for (int i = 0; i < len-1; i++) for (int j = i+1; j  < len; j++) if(c[i]==c[j]) c[j] = '-';
    for (int i = 0; i < len; i++) if (c[i]!='-') s++;
    return s;
}
bool check(string sample,string input,int s)
{
    int i,j;
    for (i = 0; i < input.length(); i++)
    {
        for (j = 0; j < sample.length(); j++) if(input[i]==sample[j]) break;
        if (j==sample.length()) return false;
    }
    if(count(input) != s) return false;
    return true;
}
int main()
{
    int n,len,s;
    string sample;
    cin >> n >> sample;
    s = count(sample);
    string input;
    int out[n];
    for (int i = 0; i < n; i++)
    { 
        cin >> input;
        if(check(sample,input,s)) out[i] = 1;
        else out[i] = 0;
    }
    for (int i = 0; i < n; i++)
    { 
        if (out[i]) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}