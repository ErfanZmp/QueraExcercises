#include<iostream>
using namespace std;
void count_maqsum(int n,long update[])
{
    for (int i = 1; i <= n; i++) if(n%i==0)
    {
        update[0]+=i;
        update[1]++;
    }
}
int main()
{
    int n;
    long sum_total[2] = {0,0} ;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        count_maqsum(i,sum_total);
    }
    cout << sum_total[1] << " " << sum_total[0];
}