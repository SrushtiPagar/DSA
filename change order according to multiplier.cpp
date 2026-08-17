#include <iostream>
using namespace std;

int main()
{
	int size;
	int no[size];
	
	
	cout<<"Enter size of an Array :";
	cin>>size;
	
	for(int i=0 ; i<size ; i++)
	{
		cout<<"Enter "<<i<<"th element of an array :";
		cin>>no[i];
	}
	for(int j=0;j<size ; j++)
	{
		if(no[j]%10 != 0)
		{
			cout<<no[j]<<" ";
		}
	}
	for (int k=0 ; k<size;k++)
	{
		if(no[k]%10 == 0)
		{
		cout<<no[k]<<" ";
		}
	}
}
