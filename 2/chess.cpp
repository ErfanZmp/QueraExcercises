#include<iostream>
using namespace std;
int main()
{
    int A[6],B[6]={1,1,2,2,2,8};
    for (int i = 0; i < 6; i++)
    {
        cin >> A[i];
        A[i] = B[i] - A[i];
    }
    for (int i = 0; i < 6; i++)
    {
        cout << A[i];
        if(i!=5) cout << " ";
    }
    return 0;
}