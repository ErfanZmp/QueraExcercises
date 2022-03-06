#include <iostream>
using namespace std;
int main()
{
    const unsigned int ten = 1000000007;
    uint_fast64_t n,q,index=1,i,a,b,s=0,counter,t;
    cin >> n >> q;
    uint_fast64_t *A = new uint_fast64_t[n+1];
    A[0] = 0;
    uint_fast64_t *B = new uint_fast64_t[q];
    char inp[3];
    for (i = 1; i <= n; i++)
    { 
        cin >> t;
        s += t;
        A[i] = s;
    }
    for (i = 0; i < q; i++)
    {
        cin >> inp >> a >> b;
        a--;
        if (inp[1] == 's')
        { 
            B[index] = A[b] - A[a-1];
            index++;
        }
        else
        {
            s = 0;
            for (counter = 1; a <= b; counter++)
            { 
                s += counter;
                A[a++] += s;
            }
        }
    }
    for (i = 1; i < index; i++) cout << B[i] << "\n";
    return 0;
}

