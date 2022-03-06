#include<iostream>
using namespace std;
int main()
{
    int R=0,G=0,Y=0;
    char A[5];
    cin >> A;
    for (int i = 0; i < 5; i++)
    {
        if (A[i]=='R') R++;
        else if (A[i]=='G') G++;
        else Y++;
    }
    if(R>=3) cout << "nakhor lite";
    else if(R>=2 && Y>=2) cout << "nakhor lite";
    else if (G==0) cout << "nakhor lite";
    else cout << "rahat baash";
    return 0;
}