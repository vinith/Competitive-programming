// check for aaB aB 
using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string.h>
int l;
void toJava(char* s)
{

	for(int i=0;i<l;i++){
		if(s[i]=='_'){
			printf("%c",s[i+1]-32);
			i+=1;
		}
		else printf("%c",s[i]);
	}
	printf("\n");

}
void toCpp(char*s)
{

	for(int i=0;i<l;i++){
		if(s[i]>=65&&s[i]<=90)
			printf("_%c",s[i]+32);
		else if(i+1<l&&s[i+1]>=65&&s[i+1]<=90){
                        printf("%c_%c",s[i],s[i+1]+32);
                        i+=1;
                }

		else
			printf("%c",s[i]);
	}
	printf("\n");

}
int main()
{
	char s[110];
	bool isJava,isCpp;
	while(gets(s)){
		l=strlen(s);
		isJava=isCpp=true;
		if(!(s[0]>=97&&s[0]<=122)){
			isJava=false;
			isCpp=false;
		}
		if(s[l-1]=='_'){
			isJava=isCpp=false;
		}
		for(int i=1;i<l;i++){
			if(s[i]=='_'){
				isJava=false;
				if(i+1<l&&s[i+1]=='_')
					isCpp=false;

			}
			else if(!(s[i]>=97&&s[i]<=122))
				isCpp=false;
		}
		if(isJava&&isCpp)printf("%s\n",s);
		else if(isJava)toCpp(s);
		else if(isCpp)toJava(s);
		else printf("Error!\n");
		memset(s,'\0',sizeof(s));
	}
	return 0;
}
