#include<iostream>
using namespace std;
int main()
{
    int n[1000],x,i=0;
    do
    {
        cin >> x;
        n[i] = x;
        if(x!=0) i++;
    } while (x != 0);
    for (int j = i-1; j >=0; j--) cout << n[j] << endl;
    return 0;
}