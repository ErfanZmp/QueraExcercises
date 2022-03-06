#include<iostream>
using namespace std;

int main()
{
        int j=0;
        int k=0;
        int w[7];
        for(int i=0;i<7;i++)
        {
            w[i]=0;
        }
        int n;
        cin >> n;
        char a[n];
        for( int i=0; i<=n-1;i++)
        {
            cin>>a;
            if (strstr( a,"shanbe")!=0)
            {
                w[i]=w[i]+1;
            
            }
            if (strstr( a,"1shanbe")!=0)
            {
                w[i]=w[i]+1;
            
            }
            if (strstr( a,"2shanbe")!=0)
            {
                w[i]=w[i]+1;
            
            }
            if (strstr( a,"3shanbe")!=0)
            {
                w[i]=w[i]+1;
            
            }
            if (strstr( a,"4shanbe")!=0)
            {
                w[i]=w[i]+1;
            
            }
            if (strstr( a,"5shanbe")!=0)
            {
                w[i]=w[i]+1;
            
            }
            if (strstr( a,"jome")!=0)
            {
                w[i]=w[i]+1;
            
            }
        }
        for (int i=0;i<7;i++)
        {
            if(w[i]==0)
            {
                j++;
            }
        }
        int m;
        cin>> m;
        char b[m];
        for( int i=0; i<=m-1;i++)
        {
            cin>>b;
            if (strstr( b,"shanbe")!=0){
                w[i]=w[i]+1;
            
            }
            if (strstr( b,"1shanbe")!=0){
                w[i]=w[i]+1;
            
            }
            if (strstr( b,"2shanbe")!=0){
                w[i]=w[i]+1;
            
            }
            if (strstr( b,"3shanbe")!=0){
                w[i]=w[i]+1;
            
            }
            if (strstr( b,"4shanbe")!=0){
                w[i]=w[i]+1;
            
            }
            if (strstr( b,"5shanbe")!=0){
                w[i]=w[i]+1;
            
            }
            if (strstr( b,"jome")!=0){
                w[i]=w[i]+1;
            
            }
        }
        for ( int i=0;i<7;i++)
        {
            if(w[i]==0){
                k++;
            }
        }
        cout<<k;    
        endl( std::cout );
}