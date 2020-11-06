#include<iostream>
using namespace std;
void rev(int a[],int n)
{
	int temp;
	int i,j;
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}
void display(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
int main()
{
	int a[]={1,2,3,4,5};
	int n=5;
	rev(a,n);
	display(a,n);
}
