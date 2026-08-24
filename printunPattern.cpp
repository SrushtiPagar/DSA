#include <iostream>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int arr[m][n];
	cout<<"Enter matrix;";
	for(int i=0;i<n ;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>arr[i][j];
		}
	}
//	int arr[3][3] = {
//		{1,2,3},{4,5,6},{7,8,9}
//	};
	for(int i=0 ; i<m ; i++)
	{
		if(i%2==0)
		{
			for(int j=0 ; j<n; j++)
			{
				cout<<arr[j][i];
			}
		}
		else 
		{
			for(int j=n-1 ; j>=0; j--)
			{
				cout<<arr[j][i];
			}
		}
//		else if(i==2)
//		{
//			for(int j=0 ; j<3; j++)
//			{
//				cout<<arr[j][i];
//			}
//		}
	}
}






















