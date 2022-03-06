#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char A[n][1000];
    for (int i = 0; i < n; i++) cin >> A[i];
    for (int i = n-1; i >=0; i--) 
    {
        cout << A[i];
        if(i==0) return 0; 
        cout << " ";
    }
    return 0;
}