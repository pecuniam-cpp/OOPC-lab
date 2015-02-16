#include<iostream>

using namespace std;

inline int cube(int n);

int main()
{
    int n,c;
    cout<<"enter the number to find the cube: ";
    cin>>n;
    c = cube(n);
    cout<<c;
    return 0;
}

inline int cube(int n)
{
    return n*n*n;
}
