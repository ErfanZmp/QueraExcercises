#include<iostream>
#include<string>
using namespace std;
string find(int x1,int y1,int x2,int y2)
{
    if(x1==x2) return "Vertical";
    if(y1==y2) return "Horizontal";
    return "Try again";
}
int main()
{
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << find(x1,y1,x2,y2);
}