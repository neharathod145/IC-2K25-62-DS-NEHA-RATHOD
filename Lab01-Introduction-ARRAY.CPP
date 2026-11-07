#include <iostream.h>
#include <conio.h>
# define MAX 10

class arr
{
       int a[MAX],size,maximum,minimum;
	public:
		void get();
		void put();
		void insert();
		void rev_put();
		void min();
		void max();

};
void arr::get()
{
	cout<<"Enter size of array";
	cin>>size;
	cout<<"else";
	for(int i=0; i<size; i++)
	{
		cin>>a[i];
	}
}
void arr::put()
{
	cout<<"The elements of array are";
	for( int i=0; i<size;i++)
	cout<<a[i]<<"  ";
}
void arr::insert()
{
	int p,d;
	cout<<"Insert position and data";
	cin>>p,d;
	for(int j=size-1; j>=p-1; j--)
	{
		a[j+1]=a[j];
	}
	a[p-1] =d;
	size= size+1;
}
void arr::max()
{
	maximum = a[0];
	for(int i=0; i<size; i++)
	{
		if(a[i] > maximum)
		{
		maximum= a[i];
		}
		cout<<"maximum"<<maximum;
	}
}
void arr::min()
{
	int minimum = a[0];
	for(int i=0; i<size; i++)
	{
		if(a[i]<minimum)
		{
		   minimum = a[i];
		}
		cout<<"minimum"<<minimum;
	}
}
void arr::rev_put()
{
	cout<<"Element in rev_order are";
	for
	(int i= size-1; i>=0; i--)
	cout<<a[i];
}
void main()
{
  arr a1;
  clrscr();
  a1.get();
  a1.put();
  a1.insert();
  a1.min();
  a1.max();
  a1.rev_put();
  getch();
}


