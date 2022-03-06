#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,max = 1,counter;
    cin >> n;
    char name[n][20],family[20];
    for (int i = 0; i < n; i++) cin >> name[i] >> family;
    for (int i = 0; i < n; i++)
    {
        counter = 0;
        for (int j = 0; j < n; j++) if(strcmp(name[i],name[j])==0) counter++;
        if (counter > max) max = counter;
    }
    cout << max;
    return 0;
}