#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
using namespace std;
unsigned int reverse_dig(unsigned int n)
{
	unsigned int rev=0;
	while(n>9)
	{
		rev=(rev+(n%10))*10;
		n=n/10;
	}
	rev+=n;
	return rev;
}
void next_palindrome(unsigned int n,int l)
{           
	unsigned num=n;       
	int divisor=1,digit=1;
	for(int i=1;i<l;i++)divisor*=10;
	unsigned int left=0,middle=0,right=0;
	char leftdisp[1000000],rightdisp[100000],rightmod[1000000];
	for(int i=0;i<l/2;i++)
	{       
		digit=(n/divisor);
		left+=digit;
		n-=digit*divisor;
		divisor=divisor/10;
		left*=10;	
	}
	if(l%2==0){right=n;left/=10;}
	else{
		digit=(n/divisor);
		middle+=digit;
		n-=digit*divisor;
		right=n;
		left/=10;
	}
	if(l%2==0)
	{
		unsigned int releft=reverse_dig(left);
		if(releft>right){
			right=releft;

		}
		else
		{
			left++;
			right=reverse_dig(left);
		}
		sprintf(leftdisp,"%u",left);
		sprintf(rightdisp,"%u",right);
		if(strlen(leftdisp)==strlen(rightdisp)||99%num==0){
			cout<<leftdisp<<rightdisp<<endl;
		}
		else{
			for(int i=0;i<strlen(leftdisp)-1;i++)
			{
				rightmod[i]='0';

			}
			strcat(rightmod,rightdisp);
			cout<<leftdisp<<rightmod<<endl;
		}
	}
	else{
		unsigned int releft=reverse_dig(left);
		if(releft>right){
			right=releft;
		}
		else{
			middle++;
			if(middle==10){middle=0;left++;}
			sprintf(leftdisp,"%u",left);
			sprintf(rightdisp,"%u",right);
			if(strlen(leftdisp)==strlen(rightdisp)&&(num%99!=0)){
				cout<<leftdisp<<middle<<rightdisp<<endl;
				cout<<"wrong";
			}
			else if(num%11==0){
				cout<<leftdisp<<rightdisp<<endl;
				cout<<"right";
			}
			else{
				for(int i=0;i<strlen(leftdisp)-1;i++)
				{
					rightmod[i]='0';

				}
				strcat(rightmod,rightdisp);
				cout<<leftdisp<<middle<<rightmod<<endl;
				cout<<"TF";
			}


		}

	}
}
int main()
{    
	unsigned int t;
	char number[1000000];
	cin>>number;
	next_palindrome(atol(number),strlen(number));
	return 0;
}
