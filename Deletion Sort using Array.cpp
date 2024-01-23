#include<iostream>
#include<conio.h>
using namespace std;
main()

{
int abc[100]; // by default size provided by user to array
int	size; // use total no length from by default value
int del,count;
	count=0;
	// if user want to delete multiple values
	int del_size;
	del_size=0;
	cout<<"Enter total size of an array that user want to use ="<<endl;
	cin>>size;
	// filling of array 
for (int i=0; i<size; i++)
{
	cout<<"Enter the values in array indexes = "<<i<<endl;
	cin>>abc[i];
}
// enter that value from user that he/she want to delete from array
cout<<"Enter that value that u want to delete from array "<<endl;
cin>>del;
// for deletion checking loop
for(int i=0; i<size; i++)
{
if(abc[i]==del)
{
	// now start delete size and index num of existing array
for(int j=i; j<size-1; j++)
{
abc[j]=abc[j+1];	
}
count++;
del_size++;
//break;	
}
	
}
if(count==0){
	cout<<"value does not found";
}	
else{
	cout<<"Value successfully deleted"<<endl;
	for(int i=0; i<(size-del_size); i++)
	{
		cout<<"indexes after updatation are "<<i<<endl;
		cout<<abc[i]<<endl;
	}
}
}
