#include<iostream>

using namespace std;

int main()
{
    int a=0,e=0,i=0,o=0,u=0,j=0;
    char str[50];
    cout<<"Enter a string : ";
    cin>>str;
    while(str[j]!='\0')
    {
        if(str[j]=='a')
            a++;
        else if(str[j]=='e')
            e++;
        else if(str[j]=='i')
            i++;
        else if(str[j]=='o')
            o++;
        else if(str[j]=='u')
            u++;

        j++;
    }

    cout<<"a = "<<a<<endl;
    cout<<"e = "<<e<<endl;
    cout<<"i = "<<i<<endl;
    cout<<"o = "<<o<<endl;
    cout<<"u = "<<u<<endl;
    cout<<"total no. of vowels are "<<a+i+o+e+u;


    return 0;
}
