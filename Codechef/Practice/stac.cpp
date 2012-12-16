#include<iostream>
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
			cout<<"\nTOP IN"<<top<<endl;		
			stack[top]=value;
		}
		char pop()
		{
			char returN=stack[top];
			top--;
			return returN;
		}
		void display()
		{        
			cout<<endl<<"DISPLAYING:";
			for(int i=0;i<=top;i++)
			{
				cout<<stack[i];

			}
			cout<<endl;

		}
} obj1,obj2;//end of class
int main()
{
	int choice;
	char exit=1,value;
	do
	{
		cout<<"\n1.inserts1 2.inserts2 3.pops1 4.pops2 5.diss1 6.disps2\n";
		cin>>choice;
		if(choice==1)
		{
			cout<<"\nenter value";
			cin>>value;
			obj1.push(value);
			cout<<"\nTOP OUT:"<<obj1.top<<endl;
		}
		else if(choice==2)
		{
			cout<<"\nenter value";
			cin>>value;
			obj2.push(value);
		}
		else if(choice==3)
		{
			obj1.pop();
		}
		else if(choice==4)
		{
			obj2.pop();
		}
		else if(choice==5)
		{
			obj1.display();
		}
		else if(choice==6)
		{
			obj2.display();
		}
		else
			continue;
		//cout<<"\nexit?\n";
		//cin>>exit;
	}while(exit!=2);

return 0;
}

