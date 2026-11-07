#include<iostream.h>
#include<conio.h>
#define MAX 3
class queue
{
	int a[MAX], front, rear,x;
     public:
	queue()
	{
		front= -1;
		rear= -1;
	}
	void insert();
	void delete_e();
	void display();
};

void queue::insert()
{
	if (rear == MAX-1)
		cout<<"Queue overflows";
	else{
		cout<<"Enter element";
		cin>>x;
	}
	if (rear== -1)
	{
		front=rear=0 ;
	}
	else
	{
		rear++;
	}
	a[rear] = x;
}

void queue::delete_e()
{
	if(front==-1)
		cout<<"Queue is  empty";
	else
	{
		x= a[front];
		if (front == rear)
		{
			front = -1;
			rear = -1;
		}
		else
		{ 	front++;
			cout<<"deleted item=";
		}
	}
}
void queue::display()
{
	if (front ==-1)
		cout<<"queue has no element";
	else
	{
		for(int i=front; i<=rear; i++)
			cout<<a[i]<<endl;
	}
 }

void main()
{
	queue q1;
	int choice;
	char c;
	do{
		cout<<"\n 1.insert 2.delete_e 3.display";
		cin>>choice;
		switch(choice)
		{
			case 1: q1.insert(); break;
			case 2: q1.delete_e(); break;
			case 3: q1.display(); break;
		}
		cout<<"\n You want to continue";
		c=getch();
	  }while(c=='y' || c=='Y');
getch();
}
