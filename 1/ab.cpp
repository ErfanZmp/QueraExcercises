#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int all[n+1];
    for (int i = 0; i < n; i++) cin >> all[i];
    all[n] = 0;
    int j=0,i=1,s=0,top,p=0;
    top = all[0];
    while(true)
    {
        if (i >= n) if (all[i] >= top) break;
        else 
        {
            top --;
            i = j;
            s = 0;
        }
        else if(all[i]<top) s+= top - all[i];
        else
        {
            top = all[i];
            j = i;
            p += s;
            s = 0;
        }
        i++;
    }
    cout << p;
    return 0;
}

/*  7
    5 1 3 5 2 3 5

    * 0 0 * 0 0 * 
    * 0 0 * 0 0 *   4
    * 0 * * 0 * *   2
    * 0 * * * * *   11
    * * * * * * *   0
    5 1 3 5 2 3 4   
        
*/ 