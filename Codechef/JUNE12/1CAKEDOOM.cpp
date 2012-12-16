using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
char getDigit(int a,int b,int k)
{
	//cout<<a<<" "<<b;
	for(int i=0;i<k;i++){
		if(i!=a && i!=b){
			//cout<<"----->"<<i<<endl;
			return i+'0';
		}
	}
	return '?';
}
int main()
{
	int t,k,l;
	scanf("%d",&t);
	char current,prev,next,temp;
	bool flag,flag1;
	while(t--){
		flag=true;
		flag1=false;
		char s[201],s1[200];
		memset(s,'\0',sizeof(s));
		memset(s1,'\0',sizeof(s));
		scanf("%d",&k);
		scanf("%s",s);
		strcpy(s1,s);
		l=strlen(s);
		if(l==1){
			if(s[0]=='?'){
				printf("0\n");
				continue;
			}
			else{
				printf("%c\n",s[0]);
				continue;
			}
		}
		for(int i=0;i<=l-1;i++){
			//cout<<"1--"<<s<<endl;
			current=s[i];
			if(i==0)
				prev=s[l-1];
			else
				prev=s[i-1];
			if(i==l-1)
				next=s[0];
			else
				next=s[i+1];
			if(current=='?'){
				if(prev=='?')prev=k+'0';
				if(next=='?')next=k+'0';
				//cout<<"prev "<<prev<<" next "<<next<<endl;
				temp=getDigit(prev-'0',next-'0',k);
				if(temp=='?'){
					flag=false;
					break;
				}
				s[i]=temp;
			}
			else if(current==prev||current==next){
				flag=false;break;
			}
		}
		if(k==2&&flag==false&&s1[0]=='?'&&s1[l-1]=='?'){
			flag1=true;
			s1[0]='1';
			//cout<<"here"<<endl;
			for(int i=1;i<=l-1;i++){
				//cout<<"1--"<<s<<endl;
				current=s1[i];
				prev=s1[i-1];
				if(i==l-1)
					next=s1[0];
				else
					next=s1[i+1];
				if(current=='?'){
					if(prev=='?')prev=k+'0';
					if(next=='?')next=k+'0';
					//cout<<"prev "<<prev<<" next "<<next<<endl;
					temp=getDigit(prev-'0',next-'0',k);
					if(temp=='?'){
						flag1=false;
						break;
					}
					s1[i]=temp;
				}
				else if(current==prev||current==next){
					flag1=false;break;
				}
			}

		}
		if(flag)printf("%s\n",s);
		else if(flag1)printf("%s\n",s1);
		else printf("NO\n");

	}
	return 0;
}

