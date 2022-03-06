#include<iostream>
using namespace std;
bool aval(int n)
{
    if(n==1) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for (int i = 2; i < n/2; i++) if(n%i==0) return false;
    return true;
}
int main()
{
    int a,b,first=0;
    cin >> a >> b;
    a++;
    for (int i = a; i < b; i++)
    {
        if(aval(i))
        { 
            if(first == 0)
            {
                cout << i;
                first++;
            }
            else cout << "," << i;
        }
    }
    return 0;
}