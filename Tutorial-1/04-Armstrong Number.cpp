#include<iostream>
int main()
{
	int n,a,sum=0,num;
	std::cout<<"Enter Number:";
	std::cin>>n;
	num=n;
	while(n>0) {
		a=n%10;
		sum=sum+(a*a*a);
		n=n/10;
	}
	
	if(num==sum) {
		std::cout<<"Number is Armstrong number";
	}
	else {
		std::cout<<"Number is not Armstong";
	}
	return 0;
}
