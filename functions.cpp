#include<iostream>
using namespace std;

//sum of 2 number
int sum(int a,int b)
{
	return a+b;
}

//minimum of 2 numbers
void min(int a,int b)
{
	if(a<b)
	{
		cout<<"Min is :"<<a;	
	}
	else
	cout<<"Min is :"<<b;
}

//calculate sum 1 to n
int sumOfN(int n)
{
	int sum=0;
	for(int i=1 ; i<=n ; i++)
	{
		sum +=i;
	}
	return sum;
}

//calculate N factorial
int factorial(int n)
{
	int fact = 1;
	for(int i=1 ; i<=n ; i++)
	{
		fact *= i;
	}
	return fact;
}


int main()
{
	//input a and b
	int a ,b;
	cin>>a>>b;
	//fuction call (sum)
	cout<<sum(a,b)<<endl;
	
	//fun call(min)
	min(a,b);
	cout<<endl;
	
	//take input n 
	int n;
	cin>>n;
	//function call sumofN numbers
	cout<<sumOfN(n)<<endl;
	
	//fun call for N factorial
	cout<<factorial(n)<<endl;
	
	cout<<a<<b;
}















