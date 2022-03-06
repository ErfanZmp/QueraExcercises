#include<iostream>
using namespace std;
string HH(int h)
{
    if(h==0) return "00";
    int nh = 12-h;
    char hh[] = {'0',nh+48,0};
    if (nh<10) return hh;
    return to_string(nh);
}
string MM(int m)
{
    if(m==0) return "00";
    int nm = 60-m;
    char mm[] = {'0',nm+48,0};
    if (nm<10) return mm;
    return to_string(nm);
}
int main()
{
    int h,m;
    cin >> h >> m;
    cout << HH(h) << ":" << MM(m);
    return 0;
}