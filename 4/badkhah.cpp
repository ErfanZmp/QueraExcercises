#include<iostream>
using namespace std;
int main()
{
    unsigned int p,d,i=1;
    cin >> p >> d;
    while((d*i)%p > p/2) i++;
    cout << i*d;
    return 0;
}