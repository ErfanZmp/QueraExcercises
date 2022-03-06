#include<iostream>
using namespace std;
int main()
{
    int n,b=0,count = 0,temp,is,j,last;
    cin >> n;
    temp = n;
    while(n>0)
    {
        b+= n%10;
        n /= 10;
    }
    temp++;
    while(count < b)
    {
        is = 1;
        j = 2;
        if (temp==1) is = 0;
        while( (j<= temp/2) && is)
        {
            if (temp%j==0) is = 0;
            j++;
        }
        if (is)
        { 
            last = temp;
            count++;
        }
        temp++;
    }
    cout << last;
    return 0;
}