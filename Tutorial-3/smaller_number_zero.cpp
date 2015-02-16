#include<iostream>

using namespace std;

void smallernumber(int *p1,int *p2)
{
    int a = *p1,b = *p2;
    if(a>b)
    {
        b = 0;
        cout<<"new values are "<<a<<" and "<<b<<endla;
    }
    else
    {
        a = 0;
        cout<<"new values are "<<a<<" and "<<b<<endl;
    }
}

int main()
{
    int a,b;
    cout<<"enter the value of a: ";
    cin>>a;
    cout<<"enter the value of b: ";
    cin>>b;
    smallernumber(&a,&b);
    return 0;
}
