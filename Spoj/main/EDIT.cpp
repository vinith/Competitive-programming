using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string.h>
#define min(a,b) (((a)<(b))?(a):(b))
bool isUpper(char c)
{
	if(c<=90)return true;
	return false;
}
int main()
{
	char s[1001];
	int order1,order2,l,temp; //start order1 upper case  order2 lower case
	while(scanf("%s",s)>0){
		order1=order2=0;
		l=strlen(s);
		if(l%2==0)temp=l;
		else temp=l-1;	
		for(int i=0;i<temp;i+=2){
			if(isUpper(s[i]))//1is in place
				order2++;
			else
				order1++;
			if(isUpper(s[i+1]))
				order1++;
			else
				order2++;
		}
		if(temp!=l){
			if(isUpper(s[l-1]))
				order2++;
			else
				order1++;
		}
		printf("%d\n",min(order1,order2));
	}
	return 0;
}
