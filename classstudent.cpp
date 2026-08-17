#include<iostream>
using namespace std;

class student
{
	private : int marks;
	student(int marks)
	{
		this.marks = marks;
	}
	public :void display()
	{
		cout<<"Hello Students";
		cout<<marks;
	}
};
int main()
{
	
		int mar;
		cout<<"Enter marks:";
		cin>>mar;
		
	student s1 = new student;
	s1.display();
	
}











