// searching algo program
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	// bool operator 
	bool isfound=false;
	
	// array is defined with fixed length
	int abc[5];
	
	 // number is denoted by num and position is denoted by p
	int num, p;     
	
	// filling aray with values
	for (int i=0; i<=4; i++)
	{
		cout<<" enter value in index = "<<i<<endl;
		cin>>abc[i];   
	}
	// index no by default value
	p=0;
	
	// searching vcalues from existing array
	cout<<"Enter that number that you need to fiind in existing array"<<endl;
	cin>>num;
	
	for(int i=0; i<=4; i++)   // this for loop used to search number from existing array 
	{
		if (num==abc[i])
		{
			isfound=true;
			p=i;
		   break;
		}
	}
	if (isfound)
	{
			cout<<"value is found against index num = "<<p<<endl;
		
	}
	else {
	cout<<"values doesnot found"<<endl;
	}
}
