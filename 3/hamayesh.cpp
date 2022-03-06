#include<iostream>
using namespace std;
int way(int r,int c)
{
    int out = c > 10 ? 21-c : c;
    return out;
}
int main()
{
    int A[10][20],r,c;
    for (int i = 0; i < 10; i++) for (int j = 0; j < 20; j++) A[i][j] = j+1;
    cin >> r >> c;
    c > 10 ? cout << "Left " << 11-r << " " << way(r,c) : cout << "Right " << 11-r << " " << way(r,c);
    return 0;
}