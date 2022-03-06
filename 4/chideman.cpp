#include<iostream>
using namespace std;
int main()
{
    int n,s,ave,time = 0;
    cin >> n;
    int all[n];
    for (int i = 0; i < n; i++)
    {
        cin >> all[i];
        s += all[i];
    }
    ave = s/n;
    for (int i = 0; i < n; i++) if(all[i]<ave) time += ave - all[i];
    cout << time;
    return 0;
}