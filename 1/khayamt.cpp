#include <iostream>
#include <cstdlib> 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    { 
        if(i==1) cout<<"1\n";
        else
        {
            int d[i];
            int a[i];
            for(int j=0;j<i;j++)
            {
                if(j==0)
                {
                    a[j]=1;
                    cout<<a[j];
                }
                if(j==i-1)
                {
                    a[j]=1;
                    cout<<" "<<a[j];
                }
                if(j>0&&j<i-1)
                {
                    a[j]=d[j]+d[j-1];
                    cout<<" "<<a[j];
                }
            } 
            cout<<endl;
            for(int j=0;j<i;j++)
            {
                d[j]=a[j];
            }
        } 
    }  
    return 0; 
}