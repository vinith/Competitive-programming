#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	bool primes[32000];
	primes[0]=primes[1]=1;
	for(int i=2;i<32000;i++){
		if(!primes[i]){
			for(int j=2;j*i<32000;j++){
				primes[j*i]=1;
				//cout<<"Y";
			}
		}
	}
	int t;
	int m,n;
	bool pass;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&m,&n);
		for(int i=m;i<=n;i++){
			pass=(i!=1);
			for(int j=2;j*j<=i;j++){
				if(!primes[j]){
					if(i%j==0){
						/*for(int k=j;k+j<=n;){
						  k+=j;
						//cout<<k<<" is nt prime"<<endl;
						answer[m-k]=1;*/
						pass=0;
						break;
					}
					}
				}
				if (pass)
					printf("%d\n",i);
			}
			printf("\n");
		}
		return 0;
	}

