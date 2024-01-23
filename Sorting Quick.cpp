#include<iostream>
using namespace std;
#define MAX 7

int intArray[MAX] = {4,6,3,2,1,9,7};

void printline(int count) {
   int i;
	
   for(i = 0;i < count-1;i++) {
     cout<<"=";
   }
	
    cout<<"="<<endl;
}

void display() {
   int i;
    cout<<"[";
	
   // navigate through all items 
   for(i = 0; i < MAX; i++) {
       cout<<intArray[i];
   }
	
  cout<<"]"<<endl;
}

void swap(int num1, int num2) {
   int temp = intArray[num1];
   intArray[num1] = intArray[num2];
   intArray[num2] = temp;
}

int partition(int left, int right, int pivot) {
   int leftPointer = left -1;
   int rightPointer = right;

   while(true) {
 
 while(intArray[++leftPointer] < pivot) {
         //do nothing
      }
		
      while(rightPointer > 0 && intArray[--rightPointer] > pivot) {
         //do nothing
      }
      
      if(leftPointer >= rightPointer) {
         break;
      } else {
          cout<< intArray[leftPointer],intArray[rightPointer];
         swap(leftPointer,rightPointer);
      }
   }
	
   cout<<intArray[leftPointer],intArray[right];
   swap(leftPointer,right);
  cout<<"Updated Array: "; 
   display();
   return leftPointer;
}

void quickSort(int left, int right) {
   if(right-left <= 0) {
      return;   
   } else {
      int pivot = intArray[right];
      int partitionPoint = partition(left, right, pivot);
      quickSort(left,partitionPoint-1);
      quickSort(partitionPoint+1,right);
   }        
}

int main() {
  cout<<"Input Array: "<<endl;
   display();
   printline(50);
   quickSort(0,MAX-1);
   cout<<"Output Array: "<<endl;
   display();
   printline(50);
}
