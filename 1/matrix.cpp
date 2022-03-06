#include<iostream>
using namespace std;
int tak(int inp)
{
    int s,temp,n=inp;
    while (n>=10)
    {
        temp = n;
        s = 0;
        while (temp > 0)
        {
            s += temp%10;
            temp = temp/10;
        }
        n = s;
    }
    return n;
}
int main()
{
    int n,max,flag = 0;
    cin >> n;
    char A[n];
    int B[n];
    cin >> A;
    max = tak(A[0]);
    for (int i = 0; i < n; i++)
    {
        B[i] = tak(A[i]);
        if(B[i] > max) max = B[i];
    } 
    for (int i = 0; i < max; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (B[j]>i) cout << flag;
            else cout << " ";
        }
        if (flag == 0) flag = 1;
        else if(flag == 1) flag = 0;
        cout << endl;
    }
}