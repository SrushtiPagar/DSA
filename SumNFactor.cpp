#include<iostream>
using namespace std;

int main()
{
	//Sum of all numbers divisible by 3
	//using for and while;
//	int n;
//	cin>>n;
//	int sum = 0;
	
//	for(int i=0;i<=n ; i++)
//	{
//		if(i%3 == 0)
//		{
//			sum+=i;
//		}
//	}
	
//	int i=0;
//	while(i<=n)
//	{
//		if(i%3 == 0)
//		sum+=i;
//		i++;
//	}
//	cout<<sum;


	//Print factorial of N number
	double n;
	cin>>n;
	double ans=1;
	for(int i=1;i<=n ; i++)
	{
		ans = ans*i;
	}
	cout<<ans;
}








