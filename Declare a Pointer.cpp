#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	// a variable declared 
	int abc;
	// value assigned to a variable
	abc=122;
	// declaring a pointer
	int *x;
	x=&abc;
	// address display of abc
	cout<<" the answer is "<<x<<endl;
	//cross check of address
	cout<<" conformation of address are "<<&abc<<endl;
		
}
