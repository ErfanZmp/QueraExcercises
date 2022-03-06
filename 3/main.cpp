#include <iostream>
using namespace std;
int main()
{
    uint_fast32_t n,q,index=0,i,a,b,s=0,counter,t,ten = 1000000007;
    cin >> n >> q;
    uint_fast32_t A[n+1];
    A[0] = 0;
    uint_fast32_t B[q];
    char inp[4];
    for (i = 1; i <= n; i++)
    {
        cin >> t;
        s += t;
        A[i] = s;
    }
    for (i = 0; i < q; i++)
    {
        cin >> inp >> a >> b;
        if (inp[1] == 's')
        {
            B[index] = (A[b] - A[a-1])%ten;
            index++;
            continue;
        }
        else for (counter = 1,s=0; a <= n; counter++,a++)
        {
            if(a<=b) s += counter;
            A[a]+= s;
        }
    }
    for (i = 0; i < index; i++) cout << B[i] << "\n";
    return 0;
}

