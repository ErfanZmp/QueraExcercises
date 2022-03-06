#include<iostream>
using namespace std;
int main()
{
    int n,q;
    cin >> n;
    unsigned long A[n],s,k,sum;
    for (int i = 0; i < n; i++) cin >> A[i];
    cin >> q;
    unsigned long Q[q][2];
    for (int j = 0; j < q; j++) cin >> Q[j][0] >> Q[j][1];
    for (int j = 0; j < q; j++)
    {
        s = Q[j][0];
        k = Q[j][1];
        sum = A[--s];
        while(s+k<n)
        {
            s+=k;
            sum += A[s];
        }
        cout << sum << endl;
    } 
    return 0;
}
