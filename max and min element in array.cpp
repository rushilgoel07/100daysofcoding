#include<iostream>
using namespace std;
int main()
{
	int a[]={100,5,1,1000};
	int n=4;
	int min=a[0];
	int i;
	for(i=1;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	cout<<min;
}
