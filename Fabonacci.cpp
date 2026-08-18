#include <iostream>
using namespace std;

int main()
{
//	int n;
//	cin>>n;
//	int a=0,b=1;
//	
//	for(int i=0;i<=n;i++)
//	{
//		cout<<a<<endl;
//		int nextterm=a+b;
//		a=b;
//		b=nextterm;
//	}

	//upto limit
	
	int limit;
	cin>>limit;
	int a=0,b=1;
	
	while(a<=limit)
	{
		cout<<a<<endl;
		int nextterm=a+b;
		a=b;
		b=nextterm;
	}
}
