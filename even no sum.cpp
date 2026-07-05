#include <iostream>
using namespace std;

int main()
{
	int size;
	int no[size];
	int sum =0;
	
	cout<<"Enter size of an Array :";
	cin>>size;
	
	for(int i=0 ; i<size ; i++)
	{
		cout<<"Enter "<<i<<"th element of an array :";
		cin>>no[i];
	}
	for(int i=0 ; i<size ; i++)
	{
		if(no[i]%2 == 0)
		{
			sum+=no[i];
		}
	}
	cout<<"Sum of Even numbers is "<<sum;	
}
