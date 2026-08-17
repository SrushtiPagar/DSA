#include <iostream>
using namespace std;

int binary(int array[],int target,int low,int high)
{
	if(low<=high)
	{
		int mid = low+(high-low)/2;
		if(array[mid]==target)
		{
			return mid;
		}
		else if(array[mid]<target)
		{
			return binary(array,target,mid+1,high);
		}
		else
		{
			return binary(array,target,low,mid-1);
		}
	}
	return-1;
}
int main()
{
	int size;
	cout<<"Enter size of array: ";
	cin>>size;
	int arr[size];
	cout<<"Enter array: ";
	//cin>>arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int x;
	cout<<"Enter target:";
	cin>>x;
	
	int low=0;
	int high = size;
	
	cout<<binary(arr,x,low,high);
}
























