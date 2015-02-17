#include<iostream>

using namespace std;

int power(int a,int b);
int power(double a,int b);
int power(int a,int b=2);

int main()
{
    int m,n;
    cout<<"Enter a number: ";
    cin>>m;
    cout<<"Enter the power:";
    cin>>n;
    int c = power(m,n);
    int d = power(double(m),n);
    int e = power(m);
    cout<<"Using int:m and int:n Power is "<<c<<endl;
    cout<<"Using double:m and int:n Power is "<<d<<endl;
    cout<<"Using int:m and constant:n=2 Power is "<<e<<endl;
    return 0;
}

int power(int a,int b)
{
    int i,pow=1;
    for(i=0;i<b;i++)
    {
        pow = pow * a;
    }
    return pow;
}

int power(int a,const int &b)
{
    int i,pow=1;
    for(i=0;i<b;i++)
    {
        pow = pow * a;
    }
    return pow;
}

int power(double a,int b)
{
    int i,pow=1;
    for(i=0;i<b;i++)
    {
        pow = pow * a;
    }
    return pow;
}
