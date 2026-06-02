#include<iostream>
using namespace std;
//calculate sum of digits of number

int sumOfDigit(int num)
{
	int digSum = 0;
	
	while(num > 0)
	{
		int lastDig = num%10;
		num = num/10;
		digSum += lastDig;
	}
	cout<<"Sum Of the Digit is:"<<digSum;
}

int main()
{
	int num = 12345;
	sumOfDigit(num);
}
