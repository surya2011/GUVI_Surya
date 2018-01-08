#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	cin>>n;
	if(n>0)
		cout<<"Positive";
	else if(n<0)
		cout<<"Negative";
	else
		cout<<"Zero";
}