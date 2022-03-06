#include<iostream>
using namespace std;
int main()
{
    unsigned int n,s=0;
    cin >> n;
    char *A = new char[n];
    char *B = new char[n];
    cin >> A >> B;
    for (int i = 0; i < n; i++) if (A[i]!=B[i]) s++;
    cout << s;
    return 0;
}