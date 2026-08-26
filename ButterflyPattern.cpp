#include <iostream>
using namespace std;

int main()
{
	//butterfly pattern
	int n;
	cin>>n;
	cout<<"Butterfly pattern\n";
	
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0;j<i+1;j++)
		{
			cout<<"*"<<" ";
		}
		for(int j=n ; j>n-2 ; j--)
		{
			cout<<" ";
		}
		for(int j=0;j<i+1;j++)
		{
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	
	for(int i=0 ; i<n; i++)
	{
		for(int j=n ; j<n-1 ;j--)
		{
			cout<<" ";
			
		}
		for(int j=i+1 ; j<n ;j++)
		{
			cout<<"*"<<" ";
		}
		
		
		cout<<endl;
	}
}
