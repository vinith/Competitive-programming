using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#define size 31623
const int sq=sqrt(size)+1;
bool primes[size];
void sieve()
{      
	primes[0]=primes[1]=true;
	for(int k=4;k<=size;k+=2)primes[k]=true;
	for(int i=3;i<=sq;i+=2){
		if(!primes[i]){
			for(int k=i*i;k<=size;k+=i)primes[k]=true;
		}
	}
}
int main()
{
	sieve();
	int t,m,n,sqr;
	scanf("%d",&t);
	while(t--){
		bool tempList[100001];
		scanf("%d %d",&m,&n);
		sqr=sqrt(n);
		for(int i=2;i<=sqr;i++){
			if(!primes[i]){
				//cout<<"P "<<i<<endl;
				for(int k=m;k<=n;k++){
					//cout<<"k "<<k<<endl;
					if(k%i==0){
						//cout<<k<<" prime is "<<i<<endl;
						if(k!=i)tempList[k+1-m]=true;
						for(int z=k+1-m+i;z<=n;z+=i)tempList[z]=true;//cout<<z<<endl;
						break;
					}
				}
			}
		}
		for(int i=m;i<=n;i++){
			if(!tempList[i-m])
				printf("%d\n",i);
		}
	}
	return 0;
}
