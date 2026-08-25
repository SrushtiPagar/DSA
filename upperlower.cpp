#include <iostream>
using namespace std;

int main()
{
	char ch;
	cin>>ch;
	
//	if(ch>='a' && ch<='z')
//	{
//		cout<<"lowercase character";
//	}
//	else
//	{
//		cout<<"UPPERCASE CHARACTER";
//	}

	if(ch>=65 && ch<=90)
	{
		cout<<"UPPERCASE CHARACTER";
	}
	else
	{
		cout<<"lowercase character";
	}
}
