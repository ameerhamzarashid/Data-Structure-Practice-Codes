// insertion sort

#include<iostream>
using namespace std;
main()
{
	// array declaration 
int abc[100];

// declaration pof size variable 
int size;

//  variable for insert value 
int insert_value;

// variable for index num  
int position_index;

cout<<"Enter total length of array "<<endl;
cin>>size;

// filling of an array
for(int i=0; i<size; i++)
{
	cout<<"Enter values in indexes = "<<i<<endl;
	cin>>abc[i];
}

//where u want to add a  value aganist index
cout<<"Enter that value that we want to replace "<<endl;
cin>>insert_value;

// index num where value is replaced
cout<<"Enter that index value where u want to replace that value "<<endl;
cin>>position_index;

// condition of step no 3
if(position_index>=size)
{
	cout<<"invalid position num to be replaced is not possible";
}

// 
else{
// generate space for new value
for(int i=size; i>position_index; i--)
{
	abc[i]=abc[i-1];
}

// add new value aganist index number
abc[position_index]=insert_value;
cout<<"insertion complete"<<endl;

// increase size to display newly generated array
for(int i=0; i<size+1; i++)
{
	cout<<"array after insertion"<<i<<endl;
	cout<<abc[i]<<endl;
}
}
}
