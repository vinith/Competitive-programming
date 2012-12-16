using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
bool map[100000000]={0};
long long count=0;
inline long long readlong()
{
	char temp;
	long long x=0;
	temp=getchar_unlocked();
	while(temp<48)temp=getchar_unlocked();
	x+=(temp-'0');
	temp=getchar_unlocked();
	while(temp>=48){
		x=x*10;
		x+=(temp-'0');
		temp=getchar_unlocked();
	}
	return x;

}
bool digsum(long long number)
{

	 long long sum=0,temp;
	//static unsigned long int count=0;
	while(number>9){
		temp=number%10;
		sum+=(temp*temp);
		number/=10;
	}
	sum+=(number*number);
	count++;
	if(sum==1)
		return 1;
	if(map[sum]==1)
		return 0;
	else{
		map[sum]=1;
		digsum(sum);
	}

}
int main()
{
	long long n;
	long long t;
	//scanf("%lld",&t);
	t=readlong();
	while(t--){
	//scanf("%lld",&n);
	n=readlong();
	//for(int i=0;i<10;i++)cout<<map[i];
	if(digsum(n))
		printf("%llu\n",count);
	else
		printf("-1\n");
	count=0;
	memset(map,false,sizeof(map));
	}
	return 0;
}


