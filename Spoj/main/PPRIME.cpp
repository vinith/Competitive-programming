#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{         

	bool primes[32000];
	primes[0]=primes[1]=true;
	for(int i=2;i<57;i++){
		if(!primes[i]){
			for(int j=i*2;j<32000;){
				primes[j]=true;
				j+=i;
			}
		}
	}
	int t,k;
	unsigned int m,n,i,sq;
	bool isprime;
	scanf("%d",&t);
	while(t--)
	{       
		scanf("%d %d",&n,&m);
		if(n==1)
		n=2;
		for(i=n;i<=m;i++){
			isprime=true;
			sq=sqrt(i);
			for(k=1;k<=sq;k++){
				if(!primes[k]){
					
					if(i%k==0){
						
						isprime=false;
						break;
					}
				}
			}
			if(isprime){
			printf("%d\n",i);
			}
			}
		printf("\n");
	}
	return 0;
}

