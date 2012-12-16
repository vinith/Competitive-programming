using namespace std;
#include<cstdlib>
#include<cstdio>
#include<cmath>
#include<iostream>
#include<vector>
#define size 90000000
//#define sq 9328
bool primes[size];
//vector<bool> primes(size);
int primeList[5000001];
const int sq=sqrt(size)+1;
void sieve()
{
	primes[0]=primes[1]=true;
	for(int k=4;k<=size;k+=2)primes[k]=true;
	for(int i=3;i<=sq;i+=2){
		if(!primes[i]){
			for(int k=i*i;k<=size;k+=i)primes[k]=true;
		}
	}
	int count=1;
	primeList[1]=2;
	for(int i=3;count<5000001;i+=2){
		if(!primes[i]){
		 count++;
		 //cout<<count<<endl;
		 primeList[count]=i;
		}
	}
	//cout<<count<<endl;
}
int main()
{	
       //cout<<sq<<endl;       
       int t,n,count,k;
	sieve();
	//cout<<-2<<endl;
	/*scanf("%d",&t);
	while(t--){
		count=0;
		scanf("%d",&n);
		printf("%d\n",primeList[n]);
	}*/
	return 0;
}
