#include<iostream>
using namespace std;

int main()
{
	//Triangle` star pattern 
	int n;
	cin>>n;
	cout<<"Triangle * pattern\n";
	for(int i=0 ; i<n;i++)
	{
		for(int j=0 ; j<i+1 /*j<=i*/ ; j++)
		{
			cout<<"*"<<"  ";
		}
		cout<<endl;
	}
	
	//Triangle` numbers pattern repeat
	cout<<"Triangle number pattern repeat\n";
	for(int i=1 ; i<=n;i++)
	{
		for(int j=1 ; j<i+1 /*j<=i*/ ; j++)
		{
			cout<<i<<"  ";
		}
		cout<<endl;
	}
	
	//Triangle` numbers pattern non repeat
	cout<<"Triangle number pattern non repeat\n";
	for(int i=1 ; i<=n;i++)
	{
		for(int j=1 ; j<i+1 /*j<=i*/ ; j++)
		{
			cout<<j<<"  ";
		}
		cout<<endl;
	}
	
	//Triangle` numbers pattern non repeat reverse
	cout<<"Triangle number pattern non repeat reverse\n";
	for(int i=0 ; i<n;i++)
	{
		for(int j=i+1 ; j>=1 /*j<=i*/ ; j--)
		{
			cout<<j<<"  ";
		}
		cout<<endl;
	}
	
	// Floyd's Triangle` numbers pattern 
	cout<<"Floyd's Triangle number pattern \n";
	int num =1;
	for(int i=0 ; i<n;i++)
	{
		for(int j=0 ; j<i+1 /*j<=i*/ ; j++)
		{
			cout<<num<<"  ";
			num++;
		}
		cout<<endl;
	}
	
	//Triangle` char pattern repeat
	cout<<"Triangle char pattern repeat\n";
	char ch ='A';
	for(int i=1 ; i<=n;i++)
	{
		
		for(int j=1 ; j<i+1 /*j<=i*/ ; j++)
		{
			cout<<ch<<"  ";
		}
		ch++;
		cout<<endl;
	}
	
	//Triangle` char pattern 
	cout<<"Triangle char pattern for only one char\n";
	
	for(int i=1 ; i<=n;i++)
	{
		char ch ='A';
		for(int j=1 ; j<i+1 /*j<=i*/ ; j++)
		{
			cout<<ch<<"  ";
		}
		ch++;
		cout<<endl;
	}
	
	//Triangle` char pattern non repeat
	cout<<"Triangle char pattern non repeat\n";
	
	for(int i=1 ; i<=n;i++)
	{
		char chh='A';
		for(int j=1 ; j<i+1 /*j<=i*/ ; j++)
		{
			
			cout<<chh<<"  ";
			chh++;
		}
		cout<<endl;
		chh++;
	}
	
	//reverse char
	cout<<"Triangle char pattern non repeat reverse\n";
	
	for(int i=0 ; i<n;i++)
	{
		char ch2 = 'A';
		for(int j=i+1 ; j>=1  ; j--)
		{
			ch2--; 
			cout<<ch2<<"  ";
			
		}
		ch2++;
		cout<<endl;
	}
	
	// Floyd's Triangle` char pattern 
	cout<<"Floyd's Triangle char pattern \n";
	char ch1 ='A';
	for(int i=0 ; i<n;i++)
	{
		for(int j=0 ; j<i+1 /*j<=i*/ ; j++)
		{
			cout<<ch1<<"  ";
			ch1++;
		}
		cout<<endl;
	}
	
	//invert Triangle number pattern repeat in line
	cout<<"invert Triangle number pattern repeat in line\n";
	for(int i = 0 ;i<n ; i++)
	{
		for(int j=0 ; j<i ; j++)
		{
			cout<<" ";
		}
		for(int k=0 ; k<n-i ; k++)
		{
		cout<<i+1;
		}
		cout<<endl;
	}
	
	//pyramid number pattern
	cout<<"pyramid number pattern\n";
	for(int i=0 ; i<n ; i++)
	{
		for(int j=0 ; j<n-i-1 ; j++)
		{
			cout<<" ";
		}
		for(int k=1  ;k<=i+1 ; k++)
		{
			cout<<k;
		}
		for(int l =i ;l>=1;l--)
		{
			cout<<l;
		}
		cout<<endl;
	}
}



















