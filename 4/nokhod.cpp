#include<iostream>
using namespace std;
int main()
{
    unsigned int a,b,c,s=0,max=0,time[3][2];
    cin >> a >> b >> c;
    for (int i = 0; i < 3; i++)
    {
        cin >> time[i][0] >> time[i][1];
        if (time[i][1]>max) max = time[i][1];
    }
    unsigned int times[max];
    for (int i = 0; i < max; i++) times[i] = 0;
    for (int i = 0; i < 3; i++) for (int j = time[i][0]; j < time[i][1]; j++) times[j]++;
    for (int i = 0; i < max; i++)
    { 
        if(times[i] == 1) s += a;
        else if(times[i] == 2) s += 2*b;
        else if(times[i] == 3) s += 3*c;
    }
    cout << s;
    return 0;
}