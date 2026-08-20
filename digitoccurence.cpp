#include <iostream>
using namespace std;

int CountDigitOccurrences(int l,int u,int x)
{
	int count = 0;
	for(int i = l ;i<=u ; i++ )
	{
		int n = i ;
		if(n==0 && x==0)
		{
			count++;
		}
		else
		{
			while(n > 0)
			{
				int digit =n%10;
				if(digit == x)
				{
					count++;
				}
				n = n / 10;
			}
		}
	}
	cout<<count;
}
int main()
{
	int l;
	int u;
	int x;
	cout<<"l:";
	cin>>l;
	cout<<"u:";
	cin>>u;
	cout<<"x:";
	cin>>x;
	CountDigitOccurrences(l,u,x);
	
}

















