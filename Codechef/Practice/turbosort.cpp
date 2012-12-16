#include<iostream>
using namespace std;
void sort(int);
void display();
int arr[1000000];
unsigned int counter=0;
int main()
{
	unsigned int t;
	int input;
	cin>>t;
	while(t--)
	{
		cin>>input;
		sort(input);

	}
	display();
	return 0;
}
void sort(int value)
{
	if(arr[0]==NULL)
	{
	 arr[0]=value;
	 counter++;
	}
	else
	{
	 for(int i=0;i<counter;i++)
	 {
	   if(value<arr[i];

	 }
	}
}
