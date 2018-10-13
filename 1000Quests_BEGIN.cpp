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

void Begin16(double a, double b)
{
    cout<<"Begin 16 - "<<abs(a-b)<<endl;
}

void Begin17(int a, int b, int c)
{
    int AC = abs(c-a);
    int BC = abs(b-a);
    int d = AC + BC;
    cout<<"Begin 17 - "<<AC<<" "<<BC<<" "<<d<<endl;
}

void Begin18(int a, int b, int c)
{
    cout<<"Begin 18 - "<<abs(c-a)*abs(c-b)<<endl;
}

void Begin19(int x1, int x2, int y1, int y2)
{
    int a = y2-y1;
    int b = x2-x1;
    int P = 2*(a+b);
    int S = a*b;
    cout<<"Begin 19 - "<<P<<" "<<S<<endl;
}

void Begin20(int x1, int x2, int y1, int y2)
{
    int a = pow((x2-x1),2);
    int b = pow((y2-y1),2);
    int c = sqrt(a+b);
    cout<<"Begin 20 - "<<c<<endl;
}

void Begin21(int x1, int x2, int x3, int y1, int y2, int y3)
{
    int a = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    int b = sqrt(pow((x3-x2),2)+pow((y3-y2),2));
    int c = sqrt(pow((x1-x3),2)+pow((y1-y3),2));
    int p = (a+b+c)/2;
    p = p*2;
    int s = sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<"Begin 21 - "<<p<<" "<<s<<endl;
}

void Begin22(int a, int b)
{
    int tempa = a;
    a = b;
    b = tempa;
    cout<<"Begin 22 - "<<a<<" "<<b<<endl;
}

void Begin23(int a, int b, int c)
{
    int tempc = c;
    b = a;
    c = b;
    a = tempc;
    cout<<"Begin 23 - "<<a<<" "<<b<<" "<<c<<endl;
}

void Begin24(int a, int b, int c)
{
    int tempb = b;
    c = a;
    b = c;
    a = tempb;
    cout<<"Begin 24 - "<<a<<" "<<b<<" "<<c<<endl;
}

void Begin25(int x)
{
    int y = 3*pow(x,6)-6*pow(x,2)-7;
    cout<<"Begin 25 - "<<y<<endl;
}

void Begin26(int x)
{
    int y = 4*pow((x-3),6)-7*pow((x-3),3)+2;
    cout<<"Begin 26 - "<<y<<endl;
}

void Begin27(int a)
{
    int temp = pow(a,2);
    int temp1 = temp*temp;
    int temp2 = temp*temp1*temp;
    cout<<"Begin 27 - "<<temp<<" "<<temp1<<" "<<temp2<<endl;
}

void Begin28(int a)
{
    int temp = pow(a,2);
    int temp1 = temp*a;
    int temp2 = temp1*temp;
    int temp3 = temp2*temp2;
    int temp4 = temp3*temp2;
    cout<<"Begin 28 - "<<temp<<" "<<temp1<<" "<<temp2<<" "<<temp3<<" "<<temp4<<endl;
}

void Begin29(double a)
{
    double b = (a*PI)/180;
    cout<<"Begin 29 - "<<b<<endl;
}

void Begin30(double a)
{
    double b = 180*a/PI;
    cout<<"Begin 30 - "<<b<<endl;
}

void Begin31(double t)
{
    double c = (t-32)*5/9;
    cout<<"Begin 31 - "<<c<<endl;
}

void Begin32(double c)
{
    double t = 9*c/5+32;
    cout<<"Begin 32 - "<<t<<endl;
}

void Begin33(double ves, double cena, double y)
{
    double kg1 = cena/ves;
    double nkg = y*kg1;
    cout<<"Begin 33 - "<<kg1<<" "<<nkg<<endl;
}

void Begin34(double shokoves, double shokocena, double irisves, double iriscena)
{
    double shokkg1 = shokocena/shokoves;
    double iriskg1 = iriscena/irisves;
    cout<<"Begin 34 - "<<iriskg1/shokkg1<<endl;
}

void Begin35(double v, double u, double t1, double t2)
{
    double s = v*t1;
    double v1 = v-u;
    cout<<"Begin 35 - "<<s+v1*t2<<endl;
}

void Begin36(double v1, double v2, double s, double t)
{
    double v3 = v1+v2;
    cout<<"Begin 36 - "<<s+v3*t<<endl;
}

void Begin37(double v1, double v2, double s, double t)
{
    cout<<"Begin 37 - "<<abs(s-(v1+v2)*t)<<endl;
}

void Begin38(double a, double b)
{
    cout<<"Begin 38 - "<<-b/a<<endl;
}

void Begin39(double a, double b, double c)
{
    double d = pow(b,2)-4*a*c;
    if(d>0)
    {
        double x1 = (-b-sqrt(d))/(2*a);
        double x2 = (-b+sqrt(d))/(2*a);
        cout<<"Begin 39 - "<<min(x1,x2)<<" "<<max(x1,x2)<<endl;
    }
    else
    {
        cout<<"Begin 39 - D<0"<<endl;
    }
}

void Begin40(double a, double b, double c, double a1, double b1, double c1)
{
    double d = a*b1-a1*b;
    if(d>0)
    {
        double x = (c*b1 - c1*b)/d;
        double y = (a*c1-a1*c)/d;
        cout<<"Begin 40 - "<<x<<" "<<y<<endl;
    }
    else
    {
        cout<<"Begin 40 - D<0"<<endl;
    }
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
    Begin16(2,7);
    Begin17(2,7,9);
    Begin18(2,7,9);
    Begin19(2,7,9,12);
    Begin20(2,7,9,12);
    Begin21(2,7,9,12,15,19);
    Begin22(2,7);
    Begin23(2,7,9);
    Begin24(2,7,9);
    Begin25(2);
    Begin26(2);
    Begin27(2);
    Begin28(2);
    Begin29(2);
    Begin30(2);
    Begin31(2);
    Begin32(2);
    Begin33(2,7,9);
    Begin34(2,7,9,12);
    Begin35(2,7,9,12);
    Begin36(2,7,9,12);
    Begin37(2,7,9,12);
    Begin38(2,7);
    Begin39(2,7,9);
    Begin40(2,7,9,12,15,19);
    return 0;
}
