#include<iostream>
using namespace std;
int main()
{
    long n,x=0,y=0,counter=1,sign = -1,add = 1;
    cin >> n;
    while(--n>0)
    {
        if(counter == 1) x += add;
        else if(counter == 2) y += add;
        else if(counter == 3) x -= add;
        else if(counter == 4) y -= add;
        counter++;
        if(counter == 3 || counter == 5) add++;
        if(counter == 5) counter = 1;
    }
    cout << x << " " << y;
    return 0;
}