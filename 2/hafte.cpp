#include<iostream>
using namespace std;
int main()
{
    int a,b,c,hafte[7] = {0,0,0,0,0,0,0},s=0;
    cin >> a;
    char x[7];
    for (int i = 0; i < a; i++)
    {
        cin >> x;
        switch (x[0])
        {
            case 's':
                hafte[0]++;
                break;
            case '1':
                hafte[1]++;
                break;
            case '2':
                hafte[2]++;
                break;
            case '3':
                hafte[3]++;
                break;
            case '4':
                hafte[4]++;
                break;
            case '5':
                hafte[5]++;
                break;
            case 'j':
                hafte[6]++;
                break;
        }
    }
    cin >> b;
    for (int i = 0; i < b; i++)
    {
        cin >> x;
        switch (x[0])
        {
            case 's':
                hafte[0]++;
                break;
            case '1':
                hafte[1]++;
                break;
            case '2':
                hafte[2]++;
                break;
            case '3':
                hafte[3]++;
                break;
            case '4':
                hafte[4]++;
                break;
            case '5':
                hafte[5]++;
                break;
            case 'j':
                hafte[6]++;
                break;
        }
    }
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        cin >> x;
        switch (x[0])
        {
            case 's':
                hafte[0]++;
                break;
            case '1':
                hafte[1]++;
                break;
            case '2':
                hafte[2]++;
                break;
            case '3':
                hafte[3]++;
                break;
            case '4':
                hafte[4]++;
                break;
            case '5':
                hafte[5]++;
                break;
            case 'j':
                hafte[6]++;
                break;
        }
    }
    for (int i = 0; i < 7; i++) if (hafte[i]==0) s++;
    cout << s;
    return 0;
}