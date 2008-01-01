/* This is a basic program that is explaining
 * Classes and Objects and some methods including
 * private and public variables */
#include<iostream>

class item				//Define Class 'Item'
{
	private:
		int number;		//Declare Private variables
		float cost;
	public:
		void getdata();		//Declare Method getdata

		void putdata()		//Declare and Define putdata
		{
			std::cout << "Number is:" << number << "\n";		//Print number
			std::cout << "Cost is:" << cost << "\n";		//Print cost
		}
};

void item :: getdata()		//Define Method outside of the Class
{
	std::cout<<"Enter Data for Number:";		//Prints String
	std::cin>>number;		//Inputs Data from user
	std::cout<<"Enter Data for Cost:";
	std::cin>>cost;

}

int main()			//Main Functoin
{
	item a,b;			//Declare Objects of class 'Item'
	std::cout<< "Data of A\n";
	a.getdata();			//Call method getdata for object 'a'
	a.putdata();			//Call method putdata for object 'a'
	
	std::cout << "\nData of B\n";
	b.getdata();			//Call method getdata for object 'b'
	b.putdata();			//Call methid putdata for object 'b'
}
