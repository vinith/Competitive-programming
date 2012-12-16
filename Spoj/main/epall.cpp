#include<stdio.h>
#include<string.h>
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
	//bool stat=0;
	int k=0;
	while(scanf("%s",pal)!=EOF){
		l=strlen(pal);
		//cout<<"l---->"<<l<<endl;
		if(checkPalin(pal,l)){
			printf("%s\n",pal);
			continue;
		}
		//stat=0;
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
				printf("%s%s\n",pal,reverse(split));
				//stat=1;
				break;
			}
		}
		/*if(stat==0){
			strncpy(split,pal,l-1);
			cout<<pal<<reverse(split)<<endl;
		}*/
	}
	return 0;
}
