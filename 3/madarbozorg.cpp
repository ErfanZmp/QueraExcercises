#include <iostream>
using namespace std;
int main()
{
    const unsigned int ten = 1000000007;
    uint_fast32_t n,q,index=0,i,a,b,s,counter;
    cin >> n >> q;
    unsigned int *A = new unsigned int[n];
    unsigned int *B = new unsigned int[q];
    char inp[3];
    for (i = 0; i < n; i++) cin >> A[i];
    for (i = 0; i < q; i++)
    {
        cin >> inp >> a >> b;
        a--;
        if (inp[1] == 's')
        { 
            for (B[index] = 0; a < b; B[index] = (B[index] += A[a++])%ten);
            index++;
        }
        else for (counter = 1; a < b; counter++) A[a++] = (A[a] += counter)%ten;
    }
    for (i = 0; i < index; i++) cout << B[i]%ten << "\n";
    return 0;
}

