#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
int check(string temp)
{		
	//cout<<temp<<endl;
	if(!temp.compare("000"))
		return 0;
	else if(!temp.compare("010"))
		return 1;
	else if(!temp.compare("093"))
		return 2;
	else if(!temp.compare("079"))
		return 3;
	else if(!temp.compare("106"))
		return 4;
	else if(!temp.compare("103"))
		return 5;
	else if(!temp.compare("119"))
		return 6;
	else if(!temp.compare("011"))
		return 7;
	else if(!temp.compare("127"))
		return 8;
	else if(!temp.compare("107"))
		return 9;
}
void ans(int a=0,int b=0,int c=0)
{
	if(a==0){}
	else if(a==1)
		cout<<"010";
	else if(a==2)
		cout<<"093";
	else if(a==3)
		cout<<"079";
	else if(a==4)
		cout<<"106";
	else if(a==5)
		cout<<"103";
	else if(a==6)
		cout<<"119";
	else if(a==7)
		cout<<"011";
	else if(a==8)
		cout<<"127";
	else if(a==9)
		cout<<"107";


	if(b==0){
		if(a!=0)
			cout<<"000";
	}
	else if(b==1)
		cout<<"010";
	else if(b==2)
		cout<<"093";
	else if(b==3)
		cout<<"079";
	else if(b==4)
		cout<<"106";
	else if(b==5)
		cout<<"103";
	else if(b==6)
		cout<<"119";
	else if(b==7)
		cout<<"011";
	else if(b==8)
		cout<<"127";
	else if(b==9)
		cout<<"107";

	if(c==0)
		cout<<"000";
	else if(c==1)
		cout<<"010";
	else if(c==2)
		cout<<"093";
	else if(c==3)
		cout<<"079";
	else if(c==4)
		cout<<"106";
	else if(c==5)
		cout<<"103";
	else if(c==6)
		cout<<"119";
	else if(c==7)
		cout<<"011";
	else if(c==8)
		cout<<"127";
	else if(c==9)
		cout<<"107";

	cout<<endl;


}
int convert(string s,int l)
{	
	//cout<<s<<" "<<l<<endl;
	string temp;
	int val;
	if(l==9){
	temp=s.substr(0,3);
	cout<<temp;	
	}

}
int main()
{
	string a,b,s;
	int sum;
	while((cin>>s)&&1){
		//cin>>b;

		sscanf(s,"%[^+]%*c%[^=]",a,b);
		//cout<<a<<" "<<b<<endl;
		sum=convert(a,a.length())+convert(b,b.length());	
		//cout<<(sum-sum%100)/100<<" "<<((sum%100-sum%10)/10)<<" "<<sum%10<<endl;
		cout<<s;
		ans((sum-(sum%100))/100,((sum%100-sum%10))/10,sum%10);
	}
	return 0;
}
