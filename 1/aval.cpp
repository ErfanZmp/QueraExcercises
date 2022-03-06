#include<iostream>
using namespace std;
int main()
{
    long min,max,is,j;
    cin >> min;
    cin >> max;

    for (int i = min; i <= max; i++)
    {
        is = 1;
        j = 2;
        if (i==1) is = 0;
        while( j<= i/2 && is)
        {
            if (i%j==0) is = 0;
            j++;
        }
        if (is) cout << i <<endl;
    }
    
}