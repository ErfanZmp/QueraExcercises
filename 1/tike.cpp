#include<iostream>
using namespace std;
int main()
{
    int a=0,j=2,c=0,n,t;
    cin >> n;
    t = n;
    while (t>0)
    {
        a+= t%10;
        t /= 10;
    }
    
    for(int i=n;true;i++)
    {   
        for( j=2;j<i;j++)
        {
            if(i%j==0) break;
        }
        if(i==j)
        {
            c++;
            if(c==a)
            {
                cout<<i;  return 0;
            }
        }
    }
    endl( std::cout );
    }