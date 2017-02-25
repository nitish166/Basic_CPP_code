//write a program to find largest element of array value is taken from user n element
#include<iostream>
using namespace std;
int main()
{
	int n,i;
	int number[100];
	cout<<"Enter Total number of element (1 to 100)"<<endl;
	cin>>n;
    // Store number enter by user
	for(i=0;i<n;++i)
	{
		cout<<"Enter number of element"<<i+1<<":"<<endl;
		cin>>number[i];
	}

	// loop to store largest number is number[0]
	for(i=1;i<n;++i)
	{
		if(number[0]<number[i])
			number[0]=number[i];
	}
	cout<<"Largest number is :"<<number[0];
	return 0;
}