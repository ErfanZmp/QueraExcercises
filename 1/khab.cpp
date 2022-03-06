#include<iostream>
using namespace std;

int main()
{
    int a,b,x,t=0,at,bt;
    cin >> a >> b >> x;
    for (int i = 1; i <= a; i++) if (a%i==0) at++;
    int A[at];
    t = 0;
    for (int i = 1; i <= a; i++) if (a%i==0)
    {
        A[t]=i; 
        t++;
    } 
    bt = 0;
    for (int i = 1; i <= b; i++) if (b%i==0) bt++;
    int B[bt];
    t = 0;
    for (int i = 1; i <= b; i++) if (b%i==0)
    {
        B[t]=i; 
        t++;
    } 
    t = 0;
    for (int i = 0; i < at; i++) for(int j = 0; j< bt;j++) if (A[i]+B[j] <= x) t++;
    cout << t;
}