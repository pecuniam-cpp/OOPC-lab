#include<iostream.h>
#include<conio.h>

class item	//Define Class 'Item'
{
	private:
		int number;
		float cost;
	public:
		void getdata();	//Declare Method getdata

		void putdata()	//Declare and Define putdata
		{
			cout << "Number is:" << number << endl;	//Print number
			cout << "Cost is:" << cost << endl;	//Print cost
		}
};

void item :: getdata()	//Define Method outside of the Class
{
	cout<<"Enter Data for Number:";	//Prints String
	cin>>number;	//Inputs Data from user
	cout<<"Enter Data for Cost:";
	cin>>cost;

}

void main()	//Main Functoin
{
	item a,b;	//Declare Objects of class 'Item'
	clrscr();
	cout<< "Data of A\n";
	a.getdata();	//Call method getdata for object 'a'
	a.putdata();	//Call method putdata for object 'a'
	cout << "\nData of B\n";
	b.getdata();	//Call method getdata for object 'b'
	b.putdata();	//Call methid putdata for object 'b'
	getch();
}
