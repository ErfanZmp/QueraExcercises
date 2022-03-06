#include <iostream>

using namespace std;
int main()
{
  int i,j,k,n,m;
  cin>>n;
  for(i=0; i<n; i++)
 {
      m=1;
      for(k=0; k<=i; k++)
      {
         cout<<m << " ";
         m=m*(i-k)/(k+1);
      }
      cout<<endl;
  }
}
