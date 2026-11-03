#include<iostream.h>
#include<conio.h>
void display()
{
	cout<<"Hello"<<endl;
}
void sum(int a, int b)
{
	cout<<"sum= "<<a+b<<endl;
}
int multi(int a, int b)
{
	int c=a*b;
	return c;
	//return a*b;
}
void main()
{
	int p,q,s;
	clrscr();
	cout<<"before function calling"<<endl;
	getch();
	display();
	getch();
	cout<<"Enter two numbers";
	cin>>p>>q;
	sum(p,q);
	cout<<"Addition= "<<p+q<<endl;
	cout<<"After function calling"<<endl;
	getch();
	int r= multi(p,q);
	cout<<"Multiplication="<<r<<endl;
	cout<<"After function calling"<<endl;
	getch();
}
