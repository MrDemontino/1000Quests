#include <iostream>
#include <cmath>
#define PI 3.14

using namespace std;

void Begin1(int a)
{
    int p = 4*a;
    cout<<"Begin 1 - "<<p<<endl;
}

void Begin2(int a)
{
    int s = pow(a,2);
    cout<<"Begin 2 - "<<s<<endl;
}

void Begin3(int a, int b)
{
    int s = a*b;
    int p = 2*(a+b);
    cout<<"Begin 3 - "<<s<<" "<<p<<endl;
}

void Begin4(double a)
{
    double L = PI*a;
    cout<<"Begin 4 - "<<L<<endl;
}

void Begin5(int a)
{
    int v = pow(a,3);
    int s = 6*pow(a,2);
    cout<<"Begin 5 - "<<v<<" "<<s<<endl;
}

void Begin6(int a,int b,int c)
{
    int v = a*b*c;
    int s = 2*(a*b+b*c+a*c);
    cout<<"Begin 6 - "<<v<<" "<<s<<endl;
}

void Begin7(int a)
{
    int l = 2*PI*a;
    int s = PI*pow(a,2);
    cout<<"Begin 7 - "<<l<<" "<<s<<endl;
}

void Begin8(double a, double b)
{
    cout<<"Begin 8 - "<<(a+b)/2<<endl;
}

void Begin9(double a, double b)
{
    cout<<"Begin 9 - "<<sqrt(a*b)<<endl;
}

void Begin10(double a, double b)
{
    double temp1 = pow(a,2)+pow(b,2);
    double temp2 = pow(a,2)-pow(b,2);
    double temp3 = pow(a,2)*pow(b,2);
    double temp4 = pow(a,2)/pow(b,2);
    cout<<"Begin 10 - "<<temp1<<" "<<temp2<<" "<<temp3<<" "<<temp4<<endl;
}

void Begin11(double a, double b)
{
    double temp1 = abs(a)+abs(b);
    double temp2 = abs(a)-abs(b);
    double temp3 = abs(a)*abs(b);
    double temp4 = abs(a)/abs(b);
    cout<<"Begin 11 - "<<temp1<<" "<<temp2<<" "<<temp3<<" "<<temp4<<endl;
}

void Begin12(double a, double b)
{
    double c = sqrt(pow(a,2)+pow(b,2));
    double p = a + b + c;
    cout<<"Begin 12 - "<<c<<" "<<p<<endl;
}

void Begin13(double r1, double r2)
{
    double s1 = PI*pow(r1,2);
    double s2 = PI*pow(r2,2);
    double s3 = s1-s2;
    cout<<"Begin 13 - "<<s1<<" "<<s2<<" "<<s3<<endl;
}

void Begin14(double l)
{
    double r = l / (2*PI);
    double s = PI * pow(r,2);
    cout<<"Begin 14 - "<<l<<" "<<r<<endl;
}

void Begin15(double s)
{
    double d = sqrt(s/PI)*(1.0/2.0);
    double l = PI*d;
    cout<<"Begin 15 - "<<d<<" "<<l<<endl;
}

int main()
{
    Begin1(2);
    Begin2(2);
    Begin3(2,7);
    Begin4(7);
    Begin5(2);
    Begin6(2,7,9);
    Begin7(2);
    Begin8(2,7);
    Begin9(2,7);
    Begin10(2,7);
    Begin11(2,7);
    Begin12(2,7);
    Begin13(2,7);
    Begin14(2);
    Begin15(2);
    return 0;
}
