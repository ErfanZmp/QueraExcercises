#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int w[n],max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
        if(w[i]>w[max]) max = i;
    }
    cout << max+1;
    return 0;
}