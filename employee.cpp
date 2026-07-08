#include <iostream>
using namespace std;

int main()
{
	int p1;
	int p2;
	int p3;
	int q;
	int e;
	int r;
					
	cout<<"Enter p1:";
	cin>>p1;
	cout<<"Enter p2:";
	cin>>p2;
	cout<<"Enter p3:";
	cin>>p3;
	cout<<"Enter q:";
	cin>>q;
	cout<<"Enter e:";
	cin>>e;
	cout<<"Enter r:";
	cin>>r;
	
	int que2 = e-r+2*q-p1-p2-p3;
	
	int x = que2/3;
	
	int que1;
	que1 = x+p1-q+q+p3-q;
	
	cout<<que1<<endl;
	cout<<que2<<endl;
	
	cout<<p1-q<<endl;
	cout<<p2-q<<endl;
	cout<<p3-q;
}



















