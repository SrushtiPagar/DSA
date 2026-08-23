#include<iostream>
using namespace std;
//number is prime or not

int isPrime(int n)
{
	bool isPrime_ = true;
	for(int i=2 ; i<n/2 ; i++)
	{
		if(n%i == 0)
		{
			isPrime_ = false;
			break;
		}
	}
	if(isPrime_ == true)
	{
		cout<<"Prime";
	}
	else
	{
		cout<<"Not Prime";
	}
}
int main()
{
	int n;
	cin>>n;
	
	isPrime(n);
}























