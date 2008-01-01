#include<iostream>

int main()
{
	float f,c;
	std::cout<<"Enter Temprature in Fahrenheit:";
	std::cin>>f;
	c=(5*(f-32))/9;
	std::cout<<"Temprature in Celsius:"<<c;
	return 0;
}
