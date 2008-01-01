#include<iostream>

int prime(int a)
{
   int c;
 
   for (c=2;c<=a-1;c++) { 
      if (a%c==0)
	 return 0;
   }
   if (c==a)
      return 1;
}

int main()
{
		int i,count=0,l,u;
		std::cout<<"Enter Lower Number:";
		std::cin>>l;
		std::cout<<"Enter Upper Number:";
		std::cin>>u;
		if(l<2) {
			l=2;
		}
		for(i=l;i<=u;i++) {
			if(prime(i)==1) {
				std::cout<<i<<"\n";
				count++;
			}
		}
		std::cout<<"Total Numbers are:"<<count;
		return 0;
}
