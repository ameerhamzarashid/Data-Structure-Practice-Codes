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
	int *y;
	// passing address to pointer
	y=&abc;
	// overriding of a existing value
	cout<<" Enter value to override "<<endl;
	cin>>*y;
	cout<<"  and its Address are = "<<y<<" the values aganist variable is = "<<*y<<endl;
		
}
