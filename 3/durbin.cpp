#include<iostream>
using namespace std;
void find(long long A[])
{
    for (int i = 0; i < 2; i++) for(int j = i+1; j < 3; j++) if(A[i]==A[j])
    { 
        A[i] = -1;
        A[j] = -1;
    }
}
int main()
{
    long long x[3],y[3];
    for (int i = 0; i < 3; i++) cin >> x[i] >> y[i];
    find(x);find(y);
    for (int i = 0; i < 3; i++) if (x[i] != -1) cout << x[i] << " ";
    for (int i = 0; i < 3; i++) if (y[i] != -1) cout << y[i];
    return 0;
}