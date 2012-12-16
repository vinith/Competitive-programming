using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
void getDigit(int a,int b,int k)
{
	cout<<a<<" "<<b<<endl;
	for(int i=0;i<k;i++){
		if(i!=a && i!=b){
			printf("a-%d\n",i);
			break;
		}
	}
}
int main()
{
	int t,k,l;
	scanf("%d",&t);
	char current,prev,next;
	while(t--){
		char s[101];
		scanf("%d",&k);
		scanf("%s",s);
		l=strlen(s);
		current=s[0];
		prev=s[l-1];
		next=s[1];
		if(current=='?'){
			if(prev=='?')prev=k-1+'0';
			if(next=='?')next=k-1+'0';
			getDigit(prev-'0',next-'0',k);
			//cout<<"xx"<<endl;
		}
		else if(current==prev||current==next){
			printf("NO");break;
		}
		else
			printf("%c",current);
		//cout<<"xzet"<<endl;
		for(int i=1;i<=l-1;i++){
			//cout<<"here"<<endl;
			current=s[i];
			prev=s[i-1];
			next=s[i+1];
			if(current=='?'){
				if(prev=='?')prev=k-1+'0';
				if(next=='?')next=k-1+'0';
				getDigit(s[i-1]-'0',s[i+1]-'0',k);
			}
			else if(current==prev||current==next){
				printf("NO");break;
			}
			else
				printf("%c",current);
		}
		current=s[l-1];
		prev=s[l-2];
		next=s[0];
		if(current=='?'){
			if(prev=='?')prev=k-1+'0';
			if(next=='?')next=k-1+'0';
			getDigit(prev-'0',next-'0',k);
		}
		else if(current==prev||current==next){
			printf("NO");break;
		}
		else
			printf("%c",current);
		printf("\n");
	}
	return 0;
}
