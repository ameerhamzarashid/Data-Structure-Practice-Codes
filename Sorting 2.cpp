#include<iostream>
#define max 10
using namespace std;

int a[11] = { 10, 14, 19, 26, 27, 31, 33, 35, 42, 44, 0 };
int b[10];
 // array  start point is start    mid is denoted by mid last index last
void merging(int start, int mid, int last) {
   int arr1, arr2, i;

   for(arr1 = start, arr2 = mid + 1, i = start; arr1 <= mid && arr2 <= last; i++) {
      // to convert this code into decending order just swipe the < sign into > sign
	  if(a[arr1] >= a[arr2])
      {
	  
         b[i] = a[arr1++];
     }
      else
      {
	  
         b[i] = a[arr2++];
     }
   }
   
   while(arr1 <= mid)    
      b[i++] = a[arr1++];

   while(arr2 <= last)   
      b[i++] = a[arr2++];

   for(i = start; i <= last; i++)
      a[i] = b[i];
}

void sort(int start, int last) {
   int mid;
   
   if(start < last) {
      mid = (start + last) / 2;
      sort(start, mid);
      sort(mid+1, last);
      merging(start, mid, last);
   } 
   else { 
      return;
   }   
}

int main() { 
   int i;

     cout<<"List before sorting"<<endl;
   
   for(i = 0; i <= max; i++)
 {
    
  cout<<a[i]<<endl;
   sort(0,max);
}
cout<<"List after sorting"<<endl;
   
   for(i = 0; i <= max; i++)
    cout<<a[i]<<endl;
}
