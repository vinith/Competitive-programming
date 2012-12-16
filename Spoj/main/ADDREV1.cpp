#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
char *strrev(char *str)
{       

	int l;
	l=strlen(str);
	char *reversed=new char[l-1],*ans;
	ans=reversed;
	reversed+=l-1;
	for(int i=l-1;i>-1;i--)
	{          
		*reversed=*str;
		reversed--;
		str++;

	}
	return ans;

}
using namespace std;
int main()
{        
	int x=sizeof(unsigned int);
	int n;
	unsigned int number1,number2;
	char num1[x],num2[x],num3[x];
	cin>>n;
	while(n--)
	{
		cin>>number1>>number2;
		sprintf(num1,"%u",number1);
		sprintf(num2,"%u",number2);
		number1=atol(strrev(num1));
		number2=atol(strrev(num2));
		sprintf(num3,"%u",number1+number2);
		cout<<atol(strrev(num3))<<endl;
	}
	return 0;
}
