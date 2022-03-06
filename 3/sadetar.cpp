#include<iostream>
#include <iomanip>
using namespace std;
long double Sum(double a,double b,double c,double d)
{
    return a+b+c+d;
}
long double Average(double a,double b,double c,double d)
{
    return (a+b+c+d)/4;
}
long double Product(double a,double b,double c,double d)
{
    return a*b*c*d;
}
long double Max(double a,double b,double c,double d)
{
    double max = a;
    if (b>max) max = b;
    if (c>max) max = c;
    if (d>max) max = d;
    return max;
}
long double Min(double a,double b,double c,double d)
{   
    double min = a;
    if (b<min) min = b;
    if (c<min) min = c;
    if (d<min) min = d;
    return min;
}

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << setprecision(6) << fixed;
    cout << "Sum : " << Sum(a,b,c,d) << endl;
    cout << "Average : " << Average(a,b,c,d) << endl;
    cout << "Product : " << Product(a,b,c,d) << endl;
    cout << "MAX : " << Max(a,b,c,d) << endl;
    cout << "MIN : " << Min(a,b,c,d);
    return 0;
}