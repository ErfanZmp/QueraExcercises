#include<iostream>
#include<string.h>
using namespace std;
char lower(char c)
{
    if(c > 64 && c < 91) return c + 32;
    return c;
}
char upper(char c)
{
    if(c > 96 && c < 123) return c - 32;
    return c;
}
int main()
{
    int n,counter=0;
    cin >> n;
    string line[n],word;
    //getline(cin,line[0]);
    cin.ignore(1,'\n');
    for (int i = 0; i < n; i++) getline(cin,line[i]);
    for (int i = 0; i < n; i++)
    {
        counter = 0;
        for (int j = 0; j < line[i].length(); j++)
        {
            if (counter == 0) line[i][j] = upper(line[i][j]);
            else line[i][j] = lower(line[i][j]);
            if(line[i][j] == ' ') counter = 0;
            else counter++;
        }
    }
    for (int i = 0; i < n; i++) cout << line[i] << "\n";
    return 0;
}