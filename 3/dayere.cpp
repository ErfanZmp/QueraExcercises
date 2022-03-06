#include <iostream>
using namespace std;
int skipk(int i,int n,int k)
{
    int j = 1;
    while (i!=1)
    {
        while (i <= n)
        {
            j++;
            i = i+k; 
        }
        i = i - n ;
    }
    return j;
}
int main()
{
    int n,k,i; 
    cin >> n >> k;
    i = 1 + k;
    cout << skipk(i,n,k) <<endl;
}
