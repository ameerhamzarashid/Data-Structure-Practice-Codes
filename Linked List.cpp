#include<iostream>
using namespace std;
int count=0;
// create a structure 
struct node
{
	// contain data
	int data;
	// pointer name next
  	node *next;
	// constructor
  node(int value)
	{
		data = value;
	}
}*nn,*temp; 

// for start of link list 
node* head;
// ending of link list
node* tail;
// crate a list
void creatList(int data)
{
	// for creating a new node via constructor
	node* new_node = new node(data);
	// 
	if(head==NULL)
	
    new_node->next =NULL;
	head =new_node;
	tail=new_node;   
	count++;
    
}
void insertatlast(int data)
{
	// for creating a new node via constructor
	node* new_node = new node(data);
	// see if node is created or not
	if(head==NULL)
	{
		cout<<"create list first"<<endl;
	}
	
	else{
		// now new node is made and update the tail
    tail->next =new_node;
    tail=new_node;
    tail->next =NULL;
    count++;
	}
}

void insertatfirst(int data)
{
	node* new_node = new node(data);
	
	if(head==NULL && tail==NULL)
	{
		cout<<"create list first"<<endl;
	}
	else
	{
		// head indicate a new node after start
	new_node->next = head;
	head =new_node;
	count++;
    }
}

void intsertatposition(int data, int position)
{
	if(head==NULL)
	{
		cout<<"create list first"<<endl;
	}
	else{
	int unknownnode =1;
	nn = new node(data);
	temp= head;
	while(temp != NULL)
	{
		if(position-1==unknownnode)
		{	
			nn->next = temp->next;
			temp->next = nn;
			count++;
		}
		unknownnode++;
		temp = temp->next;
	}
}
}

void deletefirst()
{
	if(head==NULL)
	{
		cout<<"create list first"<<endl;
	}
	else{
	temp = head->next;
	delete(head);
	head =temp;
}
}
void deletespecific(int position)
{
	if(head==NULL)
	{
		cout<<"create list first"<<endl;
	}
	else{
	int no_ofnode=1;
	node* temp2;
	node* temp3;
	temp = head;
	while(temp!=NULL)
	{
	   	if(position-1==no_ofnode)
	   	{
	   		temp2 = temp->next;
	   		temp3 = temp2->next;
	   		temp->next =NULL;
	   		temp->next = temp3; 
		 }
	    no_ofnode++;
	    temp= temp->next;
	}
}
}

deletelast()
{if(head==NULL)
	{
		cout<<"create list first"<<endl;
	}
	else{
	node* temp=head;
	while(temp!=NULL)
	{
		if(temp->next == tail)
		{
			temp->next =NULL;
			tail =temp;
		}
		temp = temp->next;
	}
}
}
display()
{
	if(head==NULL)
	{
		cout<<"create list first"<<endl;
	}
	else{
	node* temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp =temp->next;
	}
}
}

void searching(int value)
{
	if(head==NULL)
	{
		cout<<"create list first"<<endl;
	}
	else{
	int count=0;
	int index=1;
	node* temp = head;
	while(temp!= NULL)
	{
		if(temp->data == value)
		   {
		   	 count++;
		   	 break;
		   }
		   temp= temp->next;
		   index++;
	}
	if(count!=0)
	   cout<<"Value found at position : "<<index<<endl;
	else
	    cout<<"Value not found"<<endl;
	}
}
void greaterNumber(int value)
{
	if(head==NULL)
	{
		cout<<"create list first"<<endl;
	}
	else{
	int count=0;
	node* temp = head;
	while(temp!= NULL)
	{
		if(temp->data > value)
		   {
		   	 count++;
		   }
		   temp= temp->next;
	}
	if(count!=0)
	   cout<<"Elements greater than "<<value<<" are "<< count<<endl;
	else
	    cout<<"No element is greater!"<<endl;
}
}
main()
{
	 int a;   // for switch statement
	 int x;   // for data to be inserted in list
	cout<<"1:creat a list"<<endl;
	cout<<"2:insert at start"<<endl;
	cout<<"3:insert at end"<<endl;
	cout<<"4:insert at specific position"<<endl;
	cout<<"5:Delete first node"<<endl;
    cout<<"6:Delete at specific position"<<endl;
	cout<<"7:Delete last Node"<<endl;
	cout<<"8:Search a given value"<<endl;
	cout<<"9:Count number greater than given number\n";
	cout<<"10:Display list"<<endl;	
	cout<<"\t\t\t---------------------------------\n"<<endl;
	while(true)
	{
	cout<<"Enter choice"<<endl;
	cin>>a;
	switch(a)
	{
		case 1:
			{
				cout<<"Enter the value"<<endl;
				cin>>x;
				creatList(x);
				cout<<"List is "<<endl;
				display();
				cout<<"\n";
				break;
			}
			case 2:
			{
				cout<<"Enter the value"<<endl;
				cin>>x;
			    insertatfirst(x);
				cout<<"List is "<<endl;
				display();
				cout<<"\n";
				break;
			}
			case 3:
			{
				cout<<"Enter the value"<<endl;
				cin>>x;
				insertatlast(x);
				cout<<"List is "<<endl;
				display();
				cout<<"\n";
				break;
			}
			case 4:
			{
				int pos;
				cout<<"Enter the value"<<endl;
				cin>>x;
				cout<<"enter the position"<<endl;
				cin>>pos;
				intsertatposition(x,pos);
				cout<<"List is "<<endl;
				display();
				cout<<"\n";
				break;
			}
			case 5:
				{
					deletefirst();
					cout<<"List is "<<endl;
			     	display();
			     	cout<<"\n";
				break;
				}
				case 6:
					{
						int pos;
						cout<<"enter the position"<<endl;
			         	cin>>pos;
						deletespecific(pos);
						cout<<"List is "<<endl;
				        display();
				        cout<<"\n";
			         	break;
					}
					case 7:
						{
						deletelast();
						cout<<"List is "<<endl;
				        display();
				        cout<<"\n";
				        break;
						}
						
					case 8:
						{
							int num;
							cout<<"Enter the number"<<endl;
							cin>>num;
							searching(num);
							break;
						}
					case 9:
						{
								int num;
							cout<<"Enter the number"<<endl;
							cin>>num;
						    greaterNumber(num);
						    break;
						}
					case 10:
						{
						cout<<"List is "<<endl;
				        display();
				        cout<<"\n";
				break;
						}
					
			default:
				cout<<"\a";	}
}
}
