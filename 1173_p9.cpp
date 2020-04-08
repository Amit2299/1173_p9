#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int *p,n,add=0;
p=new int[n];
cout<<"Enter the no of element:";
cin>>n;
cout<<"Enter the Element:";
for(inti=0;i<n;i++)
{	
cin>>p[i];
add+=p[i];
}
cout<<"Sum of Element:"<<add;
delete[]p;
getch();
}
