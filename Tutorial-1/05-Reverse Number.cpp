#include<iostream>

int main()
{
	long int r,n,rev=0;
	std::cout<<"Enter Number:";
	std::cin>>n;
	
	while(n != 0) {
		r = n % 10;
		rev = ( rev * 10 ) + r;
		n = n / 10;
	}
	std::cout<<"Reversed Number:"<<rev;
	return 0;
}
