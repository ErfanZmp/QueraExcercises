#include<iostream>
using namespace std;
int main()
{
    short n,sum=0,s,max = 0,max_i,index = 0,count=0;
    string line;
    cin >> n;
    short kill[n][n],need[n];
    for (short i = 0; i < n; i++)
    { 
        s = 1;
        cin >> line;   
        for (short j = 0; j < n; j++)
        { 
            if(line[j]=='1')
            { 
                kill[i][j] = 1;
                s++;
            }
            else kill[i][j] = 0;
        }
        kill[i][i] = 1;
        if(s>max)
        {
            max = s;
            max_i = i;
        }
    }
    sum += max;
    need[index++] = max_i;
    count++;
    while(sum<n)
    {
        max = 0;
        for (short j = 0; j < n; j++) if(kill[max_i][j]) for (short i = 0; i < n; i++) kill[i][j] = 0;
        for (short i = 0; i < n; i++)
        {
            s = 0;
            for(short j = 0; j < n;j++) if(kill[i][j]) s++;
            if(s > max)
            { 
                max = s;
                max_i = i;
            }
        }
        sum += max;
        need[index++] = max_i;
        count++;
    }
    cout << count << "\n";
    for (short i = 0; i < index; i++) cout << need[i] << " ";
}