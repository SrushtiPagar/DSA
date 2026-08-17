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
	int low=0;
	int mid=0;
	int high = size-1;
	while(mid<=high)
	{
		if(arr[mid]==0)
		{
			int temp = arr[low];
			arr[low] = arr[mid];
			arr[mid] = temp;
			low++;
			mid++;
		}
		else if(arr[mid]==2)
		{
			int temp = arr[mid];
			arr[mid] = arr[high];
			arr[high] = temp;
			high--;
		}
		else
		{
			mid++;
		}
	}
	for(int i=0;i<size;i++)
	{
		cout<<arr[i];
	}
}




















