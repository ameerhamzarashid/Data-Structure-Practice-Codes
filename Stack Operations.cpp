#include <iostream>
using namespace std;

// variable declaration 
int stack[10];

// for checcking stack is filled or not
int top=10;

//initia;l level
int level=-1;

// a function naming push ?
void push(int val) {
	
   if(level>=top-1){
   
   cout<<"Stack is already filled"<<endl;
}
   else {
      level++;
      stack[level]=val;
   }
}

void pop() {
   if(level<=-1)
   {
   
   cout<<"Stack already empty"<<endl;
}

   else {
      cout<<"The popped element is "<< stack[level] <<endl;
      level--;
   }
}
void display() {
   if(level>=0) {
      cout<<"Stack elements are:";
      for(int i=level; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty";
}
int main() {
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}
