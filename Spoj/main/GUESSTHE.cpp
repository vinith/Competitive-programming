using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
long long hcf(long long a,long long b)
{
	long long t1=a*b,temp;
	while(b>0){
		temp=a;
		a=b;
		b=temp%b;
	}
	return t1/a;
}
int main()
{        long long h;
	bool flag;
	while(1){
		h=1ll;
		flag=true;
		char inp[25];
		scanf("%s",inp);
		if(inp[0]=='*')break;
		else{
			for(int i=0;inp[i]!='\0';i++){
				if(inp[i]=='Y')h=hcf(h,i+1);
				else if(h%(i+1)==0){
					printf("-1\n");
					flag=false;
					break;
				}
			}
			if(flag)printf("%lld\n",h);
		}
	}
	return 0;
}
