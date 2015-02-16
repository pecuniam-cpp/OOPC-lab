#include<iostream>

using namespace std;

int number(int n)
{
    int number = 0;
    while(n!=0)
    {
        number = number * 10;
        number = number + n % 10;
        n = n/10;
    }
    return number;
}

int main()
{
    int n;
    cout<<"enter a number = ";
    cin>>n;
    int rev = number(n);
    cout<<"reversed number is : "<<rev;
    return 0;
}
