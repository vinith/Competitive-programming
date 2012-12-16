using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string.h>
int main()
{
	char num[250];
	int l,temp,temp1;
	while(scanf("%s",num)){
		bool div[10]={false};
		div[1]=true;
		l=strlen(num);
		temp=num[l-1]-48;
			if(temp%2==0){
				div[2]=true;
				temp=(num[l-2]-48)*10+temp;
				if(temp%4==0){
					div[4]=true;
					temp=(num[l-3]-48)*100+temp;
					if(temp%8==0)
						div[8]=true;
				}
			}
		for(int i=1;i<10;i++){cout<<i<<" "<<div[i]<<endl;}
	}

}
