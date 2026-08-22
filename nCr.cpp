#include<iostream>
using namespace std;
//calculate nCr 

//int factorial(int n, int r)
//{
//	int k;
//	k = n-r ; 
//	int factn=1;
//	while(n>0)
//	{
//		factn *=n;
//		n--;
//	}
//	
//	int factr=1;
//	while(r>0)
//	{
//		factr *=r;
//		r--;
//	}
//	
//	int factk=1;
//	while(k>0)
//	{
//		factk *=k;
//		k--;
//	}
//	cout<<"nCr is :"<< factn/(factr * factk);
//}
//int main()
//{
//	int n , r;
//	cin>>n>>r;
//	factorial(n, r);
//}



//second approach
int factorial(int n)
{
	int fact =1;
	for(int i=1 ; i<=n ; i++)
	{
		fact *= i;
	}
	return fact;
}
int nCr(int n,int r)
{
	int fact_n = factorial(n);
	int fact_r = factorial(r);
	int fact_nmr = factorial(n-r);
	
	return fact_n/(fact_r * fact_nmr);
}

int main()
{
	int n,r;
	cin>>n>>r;
	cout<<nCr(n,r);
}
























