#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	//numbers;
	cout<<"Number pattern\n";
	for(int i=1 ;i<=n ; i++)
	{
		for(int j=1 ; j<=n ; j++)
		{
			cout<<j<<"  ";
		}
		cout<<endl;
	}
	cout<<endl;
	//stars
	cout<<"Star pattern\n";
	for(int i=1 ;i<=n ; i++)
	{
		for(int j=1 ; j<=n ; j++)
		{
			cout<<"*"<<"  ";
		}
		cout<<endl;
	}
	
	//characters
	cout<<"ABCD pattern\n";
	for(int i=0 ;i<n ; i++)
	{
		char ch='A';
		for(int j=0 ; j<n ; j++)  //inner a line starts
		{
			cout<<ch<<"  ";
			ch++;
		}
		cout<<endl;
	}
	cout<<endl;
	//square integer pattern non repeat
	cout<<"Number pattern non repeat\n";
	int x = 1;
	for(int i=1 ;i<=n ; i++)
	{
		for(int j=1 ; j<=n ; j++)
		{
			cout<<x<<"  ";
			x++;
		}
		cout<<endl;
	}
	cout<<endl;
	
	//characters non repeat
	cout<<"ABCD pattern\n";
	char ch='A';
	for(int i=0 ;i<n ; i++)
	{
		
		for(int j=0 ; j<n ; j++)  //inner a line starts
		{
			cout<<ch<<"  ";
			ch++;
		}
		cout<<endl;
	}
}
