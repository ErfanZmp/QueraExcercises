#include<iostream>
using namespace std;
int tool(int n,int x,int y,int A[])
{
    int s = A[0]*x+A[1]*y;
    if(s!=n) A[0]++;
    if(s<n) tool(n,x,y,A);
    return A[0]*x+A[1]*y;
}
int arz(int n,int x,int y,int A[])
{
    int s = A[0]*x+A[1]*y;
    if(s!=n) A[1]++;
    if(s<n) arz(n,x,y,A);
    return A[0]*x+A[1]*y;
}
int main()
{
    int A[] = {0,0},n,x,y;
    cin >> n >> x >> y;
    if(tool(n,x,y,A) == n)
    { 
        cout << A[0] << " " << A[1] << "\n";
        return 0;
    }
    while(--A[0]>=0)
    {
        if(arz(n,x,y,A) == n)
        {
            cout << A[0] << " " << A[1] << "\n";
            return 0;
        }
        A[1]--;
    }
    cout << -1;
    return 0;
}