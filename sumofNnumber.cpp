#include <iostream>
using namespace std;

int main()
{
	//sum of n number;
	
	int n;
	cin>>n;
	int sum=0;
	
//	for(int i =0 ; i<=n ; i++)
//	{
//		sum += i ; 
//	}
//	cout<<sum;
	int count = 1 ; 
//	while(count <= n )
//	{
//		sum+=count;
//		count++; 
//	}
//	cout<<sum;

	//sum of all odd numbers
//	for(int i=1 ; i<=n ; i= i+2)
//	{
//		sum = sum+i;
//	}
//	cout<<sum;
	
//	for(int i=1 ; i<=n ; i++)
//	{
//		if(i%2 != 0)
//		sum = sum+i;
//	}
//	cout<<sum;

//	while(count<= n )
//	{
//		sum = sum+count;
//		count = count+2;
//	}
	
//		while(count<= n )
//	{
//		if(count%2 != 0)
//		sum = sum+count;
//		count++;
//	}

	//print sum of all even numbers upto n
//	for(int i=1 ; i<=n ; i++)
//	{
//		if(i%2 == 0)
//		sum = sum+i;
//	}
	
//	while(count<= n )
//	{
//		if(count%2 == 0)
//		sum = sum+count;
//		count++;
//	}
//	cout<<sum;
	
	
	//DO - While loop
	int i=1;
	do
	{
		cout<<i<<" ";
		i++;
	}while(i<=n);
}







