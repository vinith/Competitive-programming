using namespace std;
#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
void convert(char *s,unsigned long l)
{          
	char temp[10];
	int itemp;
	for(int i=0;i<l;i++;i++){
		if(s[i]=='_')printf(" ");
		else if(s[i]<='9'){
			if(i+1<l){
				if(!(s[i+1]<='9'))
					printf("%c",'9'-'0'+'A'+1);
				else{
				  temp[0]=s[i];
				  temp[1]=s[i+1];
				  temp[2]='\0';
				  itemp=ss		
				}
			}
		}

	}
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		char s[1000000];
		gets(s);
		convert(s,strlen(s));
	}

	return 0;
}
