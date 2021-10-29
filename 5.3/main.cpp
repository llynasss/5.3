// Lab 5.3.cpp
// <Хмиз Магдалини>
// Лабораторна робота № 5.3
// “Функції, що містять розгалуження та цикли з рекурентними співвідношеннями”
// Варіант 21
 
#include <iostream>
#include <cmath>
 
using namespace std;
double r(const double x);
int main()
{
    double hr, hk, z;
    int n;
 
 
    cout << "hr = "; cin >> hr;
    cout << "hk = "; cin >> hk;
    cout<<"n =";cin>>n;
     
    double dh = (hk-hr)/n;
     
    double h = hr;
     
    while (h <= hk)
    {
      z = r(1+h*h-2*h)+2*r(1+r(h*h))- 2*r(1)*r(1) ;
      cout<<h<<" "<<z<<endl;
      h += dh;
     }
     return 0;
     
}
 
 
double r(const double x)
{
     
   if (abs(x) >= 1)
       return 1-sin(x)*sin(x)/(exp(x));
else
{
       double S=0;
        int j=0;
        double a=1;
        S = a;
        do
        {
            j++;
            double R = x/(j*(1+2*j));
            a *= R;
            S += a*(1/1+x);
        } while(j<7);
          return S;
    }
} 
