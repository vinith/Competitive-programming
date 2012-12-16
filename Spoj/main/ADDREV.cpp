#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
char *strrev(char *str)
{       

	int l,count=0,status=0;
	l=strlen(str);
	char *reversed=new char[l-1],*ans;
	ans=reversed;
	reversed+=l-1;
	for(int i=l-1;i>-1;i--)
	{          
		if(*str!='0')
		{
			status=1;
			
		}
		else
		{
			reversed--;
		}
		if(status==1)
		{      
			
			*reversed=*str;
			 reversed--;
		}
		str++;

	}
	return ans;

}
using namespace std;
int main()
{        
	int x=sizeof(unsigned int);
	int n,l,count=0;
	unsigned int number1,number2,ans;
	char num1[x],num2[x],num3[x];
	cin>>n;
	cin>>num1>>num2;
	number1=atol(strrev(num1));
	number2=atol(strrev(num2));
	cout<<number1<<" "<<number2;cout<<endl;
	sprintf(num3,"%u",number1+number2);
	cout<<num3;
	/*
	   while(n--)
	   {
	   cin>>num1>>num2;
	   number1=atol(strrev(num1));
	//cout<<number1+1;*/
	/*	
		for(int i=l-1;i>-1;i--)
		{
		num4[count]=num2[i];
		count++;
		}
		strcpy(num2,num4);
		number2=atol(num2);
		ans=number1+number2;
		cout<<ans;
		strcpy(num1,"\0");
		strcpy(num2,"\0");
		strcpy(num2,"\0");*/
	//sprintf(num3,"%u",number1+number2);
	//cout<<num3<<endl;
	/*l=strlen(num3);
	  count=0;
	  for(int i=l-1;i>-1;i--)
	  {
	  num1[count]=num3[i];
	  count++;
	  }

	  cout<<num1<<endl;*/
	//}

	return 0;
}
