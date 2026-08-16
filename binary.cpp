#include <iostream>
using namespace std;

int binary(int arr[],int low,int high,int t)
{
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(t==mid)
		{
			cout<<arr[mid];	
		}
		else if(t<mid)
		{
			high = mid-1;
		}
		else 
		{
			low = mid+1;
		}
	}	
}
int main()
{
	int size;
	cout<<"Enter size of array: ";
	cin>>size;
	
	int low=0;
	int high = size;
	int t;
	
	int arr[size];
	cout<<"Enter array: ";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter target:";
	cin>>t;
	
	cout<<binary(arr,low,high,t);
}



















