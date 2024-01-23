// Another code for queue basic technique

#include <iostream>
using namespace std;
// total size of queue
int queue[100];
// for full or empty condition always define n against queue 
int n = 100;
// front and rare is equal to -1 for empty and single state
int front = - 1, rear = - 1;

void enque() {
	// the third party variable that take vakue and input in queue
   int val;
   // condition that comes insted of if full function to see either queue is full or not
   if (rear == n - 1)
   {
   
   cout<<"Queue is full"<<endl;
}
   else {
   	// else part contain by default value but we put a condition there as we are allowed to enter that 
      if (front == - 1)  // to see that already value is inserted or not 
      front = 0;
      cout<<"Insert the element in queue : "<<endl;
      cin>>val;
      // rear increased as value is inserted
      rear++;
      // value is stored in queue
      queue[rear] = val;
      // to see what is the value of front or rare
	  cout<<"rear"<<rear<<endl;
      cout<<"front"<<front<<endl; 
  
   }
       
}
void deque() {
	// see that queue is empty or not 
   if (front == - 1 || front > rear) {
      cout<<"Queue is empty"<<endl;
   } 
   else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;
       // to see what is the value of front or rare
	  cout<<"rear"<<rear<<endl;
      cout<<"front"<<front<<endl; 
   }
     
}
void Display() {
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}
int main() {
   int ch;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter your choice : "<<endl;
      cin>>ch;
      switch (ch) {
         case 1: enque();
         break;
         case 2: deque();
         break;
         case 3: Display();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=4);
   return 0;
}

