#include<iostream>
using namespace std;
void left(unsigned int h[],int n,int &min,int &max)
{
    for (int i = n-1; i > 0; i--) 
    {
        if(i > min)
        {
            if(h[i] == h[min]) continue;
            if(++h[i] == h[min] && i > max) max = i;
            continue;
        } 
        for (int j=i-1; j >= 0; j--) if(h[i] < h[j])
        {
            if(++h[i] == h[min] && i > max) max = i;
            break;
        }
    }
}
void right(unsigned int h[],int n,int &min,int &max)
{
    for (int i = 0; i < n-1; i++)
    { 
        if(h[i] == h[max]) continue;
        if(i < max)
        {
            if(h[i] == h[max]) continue;
            if(++h[i] == h[max] && i < min) min = i;
            continue;
        } 
        else for (int j=i+1; j < n; j++) if(h[i] < h[j])
        {
            if(++h[i] == h[max] && i < min) min = i;
            break;
        }
    }
}
int main()
{
    int n,m,max = 0,min=0;
    string dir;
    cin >> n >> m;
    unsigned int h[n];
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
        if(h[i]>=h[max]) max = i;
    }
    min = max;
    cin >> dir;
    for (int i = 0; i < m; i++)
    {
        if(dir[i]=='L') left(h,n,min,max);
        else right(h,n,min,max);
        // cout << min << " " << max << endl;
    }
    for (int i = 0; i < n; i++) cout << h[i] << " ";
}