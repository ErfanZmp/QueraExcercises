#include<iostream>
using namespace std;
int main()
{
    char n[100];
    for (int i = 0; i < 100; i++) n[i] = '-';
    cin >> n;
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (((int) n[i] - 48) == j)
            {
                cout << j <<": ";
                for(int k = 0;k<j;k++) cout << j;
                cout << endl;
            }
        }
    }
}

