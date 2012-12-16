#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{       
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int t,count=0;
	scanf("%d\n",&t);
	for(int k=0;k<t;k++){
		char s[201];
		char temp1;
		int index=0,l,count3,count5,count8;
		count3=count5=count8=0;
		gets(s);
		l=strlen(s);
		for(int i=l-1;s[i]!=' ';i--){
			index++;
		}
		for(int i=l-index;i<l;i++){
			temp1=s[i];
			if(temp1=='3')
				count3++;
			else if(temp1=='5')
				count5++;
			else if(temp1=='8')
				count8++;
			else{
				goto x;
			}
		}
		if(count8>=count5&&count5>=count3)
			count++;
                x:
		memset(s,'\0',201);
	}
	printf("%d",count);
	return 0;
}
