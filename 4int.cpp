#include<iostream>
using namespace std;

int main()
{
	int arr[4];
	cout<<"Enter 4 integers:";
	for(int i=0;i<4;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<4 ; i++)
	{
		if(arr[i]%3 == 0 && arr[i]%5 == 0)
		{
			cout<<"THREEFIVE";
		}
		else if(arr[i]%3 == 0)
			{
				cout<<"THREE"<<" ";
			}
			else if(arr[i]%5 == 0)
			{
				cout<<"FIVE"<<" ";
			}
		
		
			else
			{
				cout<<arr[i];
			}
}
}















