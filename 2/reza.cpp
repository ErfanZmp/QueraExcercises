#include<iostream>
using namespace std;
int main()
{
    int done[] = {0,0,0,0,0},s=0,count,index,check;
    char in[22],hafez[] = {'H','A','F','E','Z'},molana[] = {'M','O','L','A','N','A'};
    for (int i = 0; i < 5; i++)
    {
        for (int c = 0; c < 22; c++) in[c] = '@';
        cin >> in;
        count = 0;
        for (int c = 0; c < count,in[c]!='@'; c++) count++; count--;
        index = 0;
        while(in[index] != 'H') index++;
        check = 0;
        int j;
        if(count - index >= 5)
        {
            for (j = 0; j < 5; j++,index++) if (in[index] != hafez[j])
            {
                check = 1;
                break;
            } 
            if(check == 0 && j == 5)
            {
                s++;
                done[i]++;
            }
        }
        index = 0;
        while(in[index] != 'M') index++;
        check = 0;
        if(count - index >= 6)
        {
            for (j = 0; j < 6; j++,index++) if (in[index] != molana[j])
            {
                check = 1;
                break;
            } 
            if(check == 0 && j == 6)
            {
                s++;
                done[i]++;
            }
        } 
    }
    if (s == 0) cout << "NOT FOUND!";
    else for (int i = 0; i < 5; i++) if(done[i]!=0)
    { 
        cout << i+1;
        if(i != 4) cout << " ";
    }
}