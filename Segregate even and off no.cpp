#include<iostream>
using namespace std;
int main()
{
	int a[]={12,34,45,9,8,90,3};
	int n=sizeof(a)/sizeof(a[0]);
	int temp[n],k=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			temp[k]=a[i];
			k++;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			temp[k]=a[i];
			k++;
		}
	}
	for(int i=0;i<n;i++)
	{
		a[i]=temp[i];
		cout<<a[i]<<" ";
	}
}
