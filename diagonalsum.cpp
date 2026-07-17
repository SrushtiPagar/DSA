//given a square matrix ,calculate the absolute difference of the sum of its diagonal

#include <iostream>
using namespace std;

int main()
{
	int leftsum=0;
	int rightsum=0;
	int row,col;
	cout<<"Enter no of rows:";
	cin>>row;
	cout<<"Enter no of columns:";
	cin>>col;
	int matrix[row][col];
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>matrix[i][j];
		}
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
		cout<<matrix[i][j];
		cout<<"  ";
		}
		cout<<endl;
	}
	for(int i=0;i<row;i++)
	{
		leftsum+= matrix[i][i];
	}
	for(int i=0;i<row;i++)
	{
		rightsum += matrix[i][row-1-i];
	}
	cout<<"Difference is:"<<leftsum-rightsum;
}














