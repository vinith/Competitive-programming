#include<iostream>
#include<string.h>
using namespace std;
bool checkPalin(char pal[100001],unsigned long long l){
	if(l%2==0){
		for(int i=0;i<l/2;i++){
			if(pal[i]!=pal[l-i-1])
				return 0;
		}
		return 1;
	}
	else{
		for(int i=0;i<(l-1)/2;i++)
			for(int i=0;i<l/2;i++){
				if(pal[i]!=pal[l-i-1])
					return 0;
			}
		return 1;
	}
}
char *reverse(char *str)
{

	int l,count=0,status=0;
	l=strlen(str);
	char *reversed=new char[l-1],*ans;
	ans=reversed;
	reversed+=l-1;
	for(int i=l-1;i>-1;i--){
		if(*str!='0'){
			status=1;

		}
		else{
			reversed--;
		}
		if(status==1){

			*reversed=*str;
			reversed--;
		}
		str++;

	}
	return ans;
}
int main()
{  
	char pal[100001],pas[100001],split[100001];
	unsigned int l;
	int k=0;
	while(cin>>pal){
		l=strlen(pal);
			if(checkPalin(pal,l)){
			cout<<pal<<endl;
			continue;
		}
			for(int i=1;i<l;i++){
			strncpy(split,pal,i);
			split[i]='\0';
			//cout<<"SPLIT: "<<split;
				k=0;
				for(int j=i;j<l;j++){
				//cout<<j<<"<"<<l<<endl;
				pas[k]=pal[j];
				//cout<<"pas["<<k<<"]="<<pal[j]<<endl;
				k++;
			}
			pas[k]='\0';
			//cout<<"PAS: "<<pas<<endl;
			if(checkPalin(pas,strlen(pas))){
				cout<<pal<<reverse(split)<<endl;
				//stat=1;
				break;
			}
		}
		
	}
	return 0;
}
