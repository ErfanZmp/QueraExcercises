#include <iostream>
using namespace std;
int main()
{
    int n,t;
    cout << "Enter n:\n";
    cin >> n;
    int *A = new int[n];
    for (int i = 0; i < n; i++) cin >> A[i];
    for (int i = 0; i < n; i++) for (int j = i; j < n; j++)
    {
            if (A[j]<A[i])
            {
                t = A[j];
                A[j] = A[i];
                A[i] = t;
            }
    }
    for (int i = n/2; i < n; i++) A[i] = A[i]%A[0];
    for (int i = n/2; i < n; i++) for (int j = i; j < n; j++)
    {
            if (A[j]<A[i])
            {
                t = A[j];
                A[j] = A[i];
                A[i] = t;
            }
    }
    for (int i = n/2; i < n; i++) cout << A[i] << endl;
}


