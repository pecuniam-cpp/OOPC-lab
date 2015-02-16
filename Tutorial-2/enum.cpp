#include<iostream>

using namespace std;

enum shape{circle = 1,rectengle,triangle};

int main()
{
    int n;
    shape s;
    cout<<"find area of"<<endl;
    cout<<"1. circle\n2. rectangle\n3. triangle\n";
    cout<<"choice: ";
    cin>>n;
    switch(n)
    {
        case circle:
            {
                int r;
                cout<<"Enter the value of radius: ";
                cin>>r;
                int c = (3.14)*r;
                cout<<"area of circle is "<<c;
                break;
            }
        case rectengle:
            {
                int l,b;
                cout<<"Enter the value of length : ";
                cin>>l;
                cout<<"Enter the value of breadth : ";
                cin>>b;
                int c = l*b;
                cout<<"area of rectangle is "<<c;
                break;
            }
        case triangle:
            {
                int a,b;
                cout<<"Enter the value of altitude : ";
                cin>>a;
                cout<<"Enter the value of base : ";
                cin>>b;
                int c = a*b*(0.5);
                cout<<"area of triangle is "<<c;
                break;
            }
    }
    return 0;
}
