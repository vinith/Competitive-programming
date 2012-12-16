#include<iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int check(char temp[])
{		
	//cout<<temp<<endl;
	if(!strcmp(temp,"063"))
		return 0;
	else if(!strcmp(temp,"010"))
		return 1;
	else if(!strcmp(temp,"093"))
		return 2;
	else if(!strcmp(temp,"079"))
		return 3;
	else if(!strcmp(temp,"106"))
		return 4;
	else if(!strcmp(temp,"103"))
		return 5;
	else if(!strcmp(temp,"119"))
		return 6;
	else if(!strcmp(temp,"011"))
		return 7;
	else if(!strcmp(temp,"127"))
		return 8;
	else if(!strcmp(temp,"107"))
		return 9;
}
int convert(char s[],int l)
{	
	char temp[10];
	l--;
	unsigned int i=1,val=0;
	while(l!=-1){
		temp[3]='\0';
		temp[2]=s[l--];
		temp[1]=s[l--];
		temp[0]=s[l--];
		val+=check(temp)*i;
		i*=10;
	}
	return val;

}
int main()
{
	char a[100],b[100],s[100],sum[30];
	unsigned int ans;
	bool flag;
	while((cin>>s)&&(strcmp(s,"BYE"))){
		sscanf(s,"%[^+]%*c%[^=]",a,b);
		ans=convert(a,strlen(a))+convert(b,strlen(b));	
		sprintf(sum,"%d",ans);
		flag=0;
		//cout<<strlen(sum)<<endl;
		cout<<s;
		for(int i=0;i<strlen(sum);i++){
			if(sum[i]!=0)
				flag=1;
			if(flag==1){
				if(sum[i]=='0')
					cout<<"063";
				else if(sum[i]=='1')
					cout<<"010";
				else if(sum[i]=='2')
					cout<<"093";
				else if(sum[i]=='3')
					cout<<"079";
				else if(sum[i]=='4')
					cout<<"106";
				else if(sum[i]=='5')
					cout<<"103";
				else if(sum[i]=='6')
					cout<<"119";
				else if(sum[i]=='7')
					cout<<"011";
				else if(sum[i]=='8')
					cout<<"127";
				else if(sum[i]=='9')
					cout<<"107";
			}
		}
		cout<<endl;
	}
	return 0;
}
