#include<iostream>
using namespace std;
int main()
{
    int n,q,k,s;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++) cin >> A[i];
    cin >> q;
    uint_fast16_t Q[q];
    for (int j = 0; j < q; j++)
    {
        cin >> s;
        Q[j] = A[--s];
        cin >> k;
        while(s+k<n)
        {
            s+=k;
            Q[j] += A[s];
        }
    }
    for (int j = 0; j < q; j++) cout << Q[j] << "\n";
    return 0;
}

