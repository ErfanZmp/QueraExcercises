#include<iostream>
#include <cstring>
using namespace std;

int main()
{
    uint_fast32_t n,k,i,index = 0,count = 1,counter=0,b=0,found;
    cin >> k >> n;
    long long A[k],val,C[k];
    uint_fast32_t B[k+1];
    for (i = 0; i < k; i++) cin >> A[i];
    index = i;
    while(true)
    {
        found = 0;
        memcpy(C, A, sizeof(A));
        for (i = 0; i < k; i++)
        {
            val = C[i] > 0 ? C[i]-1 : -C[i]-1;
            if(val < k) C[val] = -abs(C[val]);
        }
        for (i = 0; i < k; i++)
        {
            if (C[i] > 0)
            {
                found = i + 1;
                break;
            }
        }
        if (found == 0) count = k + 1;
        else count = found;
        A[counter] = count;
        B[b++]=count;
        if(++index == n)
        {
            cout << count;
            return 0;
        }
        if(index > 2*k) break;
        if(++counter == k) counter = 0;
    }
    k++;
    cout << B[n%k];
    return 0;
}

