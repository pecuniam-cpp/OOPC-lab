#include<iostream>

using namespace std;

void swap_by_ref(int *p1,int *p2)
{
    int *temp;
    temp = p1;
    p1 = p2;
    p2 = temp;
    cout<<"swap value of a is : "<<*p1<<endl;
    cout<<"swap value of b is : "<<*p2<<endl;
}

void swap_by_val(int a,int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"swap value of a is : "<<a<<endl;
    cout<<"swap value of b is : "<<b<<endl;
}

int main()
{
    int a ,b;
    int *ptr1,*ptr2;

    cout<<"enter the value of a = ";
    cin>>a;
    cout<<"enter the value of b = ";
    cin>>b;
    swap_by_ref(&a,&b);
    //swap_by_val(a,b);
    return 0;
}
