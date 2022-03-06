#include<iostream>
using namespace std;
bool not_zero(int A[])
{
    for (int i = 0; i < 4; i++) if (A[i]==0) return false;
    return true;
}
int main()
{
    int n[4],afrad[4],x=0,y=0;
    for (int i = 0; i < 4; i++)
    {
        cin >> n[i];
        afrad[i] = 0;
    }
    while(not_zero(n))
    {
        n[x] -= 1;
        afrad[y] +=1;
        x += 2;
        y+=1;
        if (x > 3) x = 0;
        if (y == 4) y = 0 ;
    }
    for (int i = 0; i < 4; i++)
    {
        cout << afrad[i];
        if(i!=3) cout << " ";
    }
    return 0;
}