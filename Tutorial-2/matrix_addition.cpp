#include<iostream>

using namespace std;

int main()
{
    int a[3][3],b[3][3],c[3][3];
    int i,j;
    cout<<"enter the value of matrix a"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"a["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];
        }
    }

    cout<<"enter the value of matrix b"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"b["<<i<<"]["<<j<<"] = ";
            cin>>b[i][j];
        }
    }


    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    cout<<"addition of two matrix is\n";

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"c["<<i<<"]["<<j<<"] = "<<c[i][j]<<endl;
        }
    }
    return 0;

}

