using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#define size 500000
int main()
{
	long long n,d,number,count=0,read=0;
	int inp;
	char buff[size];
	scanf("%lld %lld\n",&n,&d);
	inp=fread_unlocked(buff,1,size,stdin);
	number=0;
	for(int i=0;read<n;i++){
		if(buff[i]=='\n'){
			read++;
			//cout<<number<<endl;
			if(number%d==0)count++;
			number=0;
		}
		else{
			number=number*10+(buff[i]-'0');
		}
	}
	printf("%lld",count);
	return 0;
}
