using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
inline long readlong()
{
	char temp;
	long x=0;
	temp=getchar_unlocked();
	while(temp<48)temp=getchar_unlocked();
	x+=(temp-'0');
	temp=getchar_unlocked();
	while(temp>=48){
		x=(x<<3)+(x<<1);
		x+=(temp-'0');
		temp=getchar_unlocked();
	}
	return x;

}
int main()
{
	long n,k,t;
	long count=0;
	n=readlong();
	k=readlong();
	for(;n--;){
		t=readlong();
		if(t%k==0)count++;
	}
	printf("%ld\n",count);
	return 0;
}
