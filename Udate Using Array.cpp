\#include<iostream>
#include<conio.h>
using namespace std;
 main() {
 
 
 
 
 
 	// define and declaring  nd initilize array of length 5
   int abc[5] = {1,3,5,7,8};
   
   // declaring variable k for index num and item for value updating 
   int k, item;

   // to fin out array is accurate with its indexes
   cout<<"The original array elements are"<<endl;
	
   for(int i = 0; i<5; i++) {
   	cout<<"values aganist index num"<<i<<endl;
     cout<<abc[i]<<endl;
   }
   
   // value that update from existing value 
    cout<<" Enter value you want to update"<<endl;
    cin>>item;
    
   // main thing where you select the index to be replaced 
   cout<<" Enter index you want to update"<<endl;
    cin>>k;
    
   abc[k] = item;

   cout<<"The array elements after updation"<<endl;
	
   for(int i = 0; i<5; i++) {
   	cout<<" Values after updation"<<i<<endl;
      cout<<abc[i]<<endl;
   }
}
