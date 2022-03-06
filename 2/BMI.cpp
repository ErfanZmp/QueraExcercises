#include<iostream>
#include <iomanip>

using namespace std;
int main()
{
    double n,m,bmi;
    cin >> n >> m;
    bmi = n/(m*m);
    cout << setprecision(2) << fixed << bmi << endl;
    if (bmi < 18.5) cout << "Underweight";
    else if (bmi < 25) cout << "Normal";
    else if (bmi < 30) cout << "Overweight";
    else cout << "Obese";
    return 0;
}