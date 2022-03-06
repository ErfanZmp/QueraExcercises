#include<iostream>
using namespace std;

void shift(unsigned long A[],unsigned long k)
{
    for (unsigned long i = 1; i < k; i++) A[i-1] = A[i];
}

void find(unsigned long A[], unsigned long *c,unsigned long *k,unsigned long *t)
{
    int check;
    unsigned long count = *c + 1;
    if(*t > A[0]) count = 1;
    while(true)
    {
        check = 0;
        for (unsigned long i = 0; i < *k; i++) if (A[i] == count)
        {
            check = 1;
            break;
        }
        if(check == 0) break;
        count++;
    }
    *c = count;
}

int main()
{
    unsigned long n,k,t,i,index = 0,count = 1,check,max = 1;
    cin >> k >> n;
    unsigned long A[k];
    for (i = 0; i < k; i++)
    { 
        cin >> A[i];
        if(A[i]>max) max = A[i];
    }
    t = A[0];
    index = i;
    while(index<n)
    {
        count = 1;
        find(A,&count,&k,&t);
        t = A[0];
        shift(A,k);
        A[k-1] = count;
        index++;
    }
    cout << count;
    return 0;
}

