#include<iostream>
using namespace std;
int main()
{
    int k,s=0;
    cin >> k;
    char pass[k+1],line[10];
    cin >> pass;
    for (int i = 0; i < k; i++)
    {
        cin >> line;
        for (int j = 0; j < 10; j++) if(pass[i] == line[j])
        {
            if(j > 4) s += 9-j;
            else s += j;
        }
    }
    cout << s;
    return 0;
}
