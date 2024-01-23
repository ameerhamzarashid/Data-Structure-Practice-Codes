#include <iostream>
#include <cstring>

using namespace std;

struct student
{
	int roll_no;
  	string name;
  	int phone_number;
};

void display(struct student *ptr)
{
  	cout << "Roll no : " << ptr -> roll_no << endl;
  	cout << "Name : " << ptr -> name << endl;
  	cout << "Phone no : " << ptr -> phone_number << endl;
}

int main(){
	struct student s;
  	s.roll_no = 1224;
  	s.name = "Ramzan";
  	s.phone_number = 888888;
  	//cout<<s.roll_no<<endl<<s.phone_number<<endl<<s.name<<endl;
 	display(&s);
	return 0;
}
