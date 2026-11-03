#include<iostream.h>
#include<conio.h>
#define MAX 5
class c_queue
{
 private:
 int a[MAX],front, rear, x;
 public:

	c_queue()
	 {
	  front=-1;
	  rear=-1;
	 }
	 void insert();
	 void delete_e();
	 void display();

};
void c_queue::insert()
{
 if(front==(rear+1)%MAX)
  cout<<"circular queue is full";
 else
 {
   cout<<"Enter data:";
   cin>>x;
   if(rear==-1)
    front=rear=0;
   else
    rear=((rear+1)%MAX);
    a[rear]=x;
 }
}
void c_queue::delete_e()
{
 if(front==-1)
  cout<<"circular queue is empty";
 else
  {
   x=a[front];
   if(front==rear)
    {
     front=-1;
     rear=-1;
    }
    else
    front=(front+1)%MAX;
    cout<<"deleted item="<<x;
  }
}
void c_queue::display()
{
  if(front==-1)
   cout<<"circular queue is empty";
  else
   {
    if(front<rear)
     {
      for(int i=front;i<=rear; i++)
      cout<<a[i];
     }
    else
    {
     for(int j=front; j<MAX; j++)
     cout<<a[j];
     for(int k=0; k<=rear; k++)
     cout<<a[k];
    }
   }
}
void main()
{
 clrscr();
 c_queue q;
 int choice;
 char c;
 do{
  cout<<"\n 1.insert 2.delete_e 3.display";
  cin>>choice;
  switch(choice)
  {
   case 1: q.insert(); break;
   case 2: q.delete_e(); break;
   case 3: q.display();  break;
   }
   cout<<"\n You want to continue";
  c=getch();
 }while(c=='y'|| c=='Y');
 getch();
}
