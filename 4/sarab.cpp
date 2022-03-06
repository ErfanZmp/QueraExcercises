#include<iostream>
using namespace std;
int time(int a,int b)
{
    int n = 0,counter = 1,x = 0,y=0;
    while(true)
    {
        if(x == a && y == b) return n;
        if(x > a && y > b) return -1;
        if (counter%4 == 0) x--;
        else x++;
        if ((counter+2)%4 == 0) y--;
        else y++;
        counter++;
        n++;
    } 
}
int main()
{
    int n,a,b;
    cin >> n;
    int out[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        out[i] = time(a,b);
    }
    for (int i = 0; i < n; i++) cout << out[i] << "\n";
    return 0;
}