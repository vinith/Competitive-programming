using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
int mem[10000][10000];
int s(long n,long m){
	int temp;
	if(n==m==0)
		return 1;
	else if(m==0||n==0)
		return 0;
	else if (m<10000&&n<10000&&mem[m][n]!=0){
		return mem[n][m];
	}
	else{
		temp=((m*(s(n-1,m)))%2)+(s(n-1,m-1)%2);
		if(n<10000&&m<10000)mem[n][m]=temp;
		return temp;
	}
}
int main(){
	int d;
	scanf("%d",&d);
	long n,m;
	for(long i=0;i<10000;i++){
		for(long k=0;k<10000;k++){
			s(i,k);
		}
	}
	while(d--){
		scanf("%ld %ld",&n,&m);
		printf("%d\n",s(n,m));
	}
	return 0;
}
