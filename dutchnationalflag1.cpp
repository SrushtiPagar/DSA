#include<iostream>
using namespace std;


int main()
{
	int size;
	cout<<"Enter size of array: ";
	cin>>size;
	int arr[size];
	cout<<"Enter array: ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<size;i++)
	{
		if(arr[i]==0)
		{
			cout<<arr[i];
		}
			
		
	}
	for(int i=0;i<size;i++)
	{
	if(arr[i]==1)
		{
			cout<<arr[i];
		}
	}

	for(int i=0;i<size;i++)
	{
		if(arr[i]==2)
		{
		cout<<arr[i];
		}
	}
	
}

























