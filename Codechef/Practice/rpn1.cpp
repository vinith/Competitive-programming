#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;
class stackk
{
	public:
		char stack[400];
		int top;
		stackk()
		{
			top=-1;
		}
		void push(char value)
		{
			top++;
			stack[top]=value;
		}
		char pop()
		{
			char returN=stack[top];
			top--;
			return returN;
		}
} obj1,obj2;//end of class
int main()
{
	int t;
	cin>>t;
	char popout,popout2;
	while(t--)
	{
		cin>>obj1.stack;
		obj1.top=strlen(obj1.stack);
		for(int i=0;i<obj1.top;i++)
		{          
			popout=obj1.stack[i];
			if(isalpha(popout)) //operand
			{
 			 cout<<popout;
			}
			else if(popout=='-'||popout=='+'||popout=='/'||popout=='*'||popout=='^')//operator
			{
			 obj2.push(popout);
			}
			else if(popout=='(') //opening bracket
			{
			  obj2.push(popout);
			}
			else if(popout==')') //closing bracked
			{       
				while(1)
				{
				 popout2=obj2.pop();
				 if(popout2=='(')
				 break;
				 else
				 cout<<popout2;				
				}
			}
		}
		obj1.top=-1;
		obj2.top=-1;
		cout<<endl;
	}
	return 0;
}
