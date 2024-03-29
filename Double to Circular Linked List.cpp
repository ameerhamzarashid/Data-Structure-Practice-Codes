// for converting double link list to circular link list 
//1- in createlist function head and tail is not next to NULL
// 2- in insert at last function tail of node is not next to null it next to head
// 3- in insert at first function the head is not joined with null it goes to tail of last node
#include<iostream>
using namespace std;
int count=0;   // to count no of nodes
struct node
{
	int data;
  	node *next;
	node *prev;
  node(int value)
	{
		data = value;
	}
}*nn,*temp; 

node* head;
node* tail;
void creatList(int data)
{
	node* new_node = new node(data);
	if(head==NULL)
	{
	head =new_node;
	tail=new_node;
	new_node->next=head;
	head->prev= tail;   
	count++;
    }
}
void insertatlast(int data)
{
	node* new_node = new node(data);
	if(head==NULL)
	{
		cout<<"create list first"<<endl;
	}
	else{
    tail->next =new_node;
    new_node->prev= tail;
    tail=new_node;
    tail->next =head;
    head->prev =tail;
    count++;
	}
}
void insertatfirst(int data)
{
	node* new_node = new node(data);
	if(head==NULL&&tail==NULL)
	{
		cout<<"create list first"<<endl;
	}
	else
	{
	new_node->next = head;
	head->prev=new_node;
	head =new_node;
	tail->next=head;
	head->prev= tail;
	count++;
    }
}

void intsertatposition(int data, int position)
{
	if(head==NULL)
	{
		cout<<"create list first"<<endl;
	}
	else
	{
	int noofnode =1;
	nn = new node(data);
	temp= head;
	node* temp2;
	int i=0;
	while(i<count)
	{
		if(position-1==noofnode)
		{	
		temp2 =temp->next;
			nn->next = temp2;
			temp2->prev= nn;
			temp->next = nn;
			nn->prev=temp;
			count++;
		}
		noofnode++;
		temp = temp->next;
		i++;
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
	tail->next=head;
	head->prev=tail;
	count--;
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
	int i=0;
	while(i<count)
	{
	   	if(position-1==no_ofnode)
	   	{
	   		temp2 = temp->next;
	   		temp3 = temp2->next;
	   		temp->next =NULL;
	   		temp->next = temp3; 
	   		temp3->prev= temp;
		 }
	    no_ofnode++;
	    temp= temp->next;
	    i++;
	}
	count--;
}
}

deletelast()
{
	
    if(head==NULL)
	{
		cout<<"create list first"<<endl;
	}
	else{
		node* temp;
	temp= tail->prev;
	tail= temp;
	tail->next= head;
	head->prev= tail;
	count--;
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
		int i=0;
	while(i<count)
	{
		cout<<temp->data<<" ";
		temp =temp->next;
		i++;
	}
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
	cout<<"8:Display list"<<endl;	
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
						cout<<"List is "<<endl;
				        display();
				        cout<<"\n";
				break;
						}
					
			default:
				cout<<"\a";	}
}
}
