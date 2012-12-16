#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	unsigned int n,q,a,b,v,count;
	scanf("%u %u",&n,&q);
	unsigned int ar[100000]={0};
	while(q--){
		count=0;
		scanf("%u %u %u",&v,&a,&b);
		if(v==0){
			for(int i=a;i<=b-1;i++) ar[i]++;
		}
		else{   
			if(b==0){
				printf("1\n");
			}
			else{
				for(int i=a;i<=b-1;i++){
					if(ar[i]%3==0)
						count++;
				}
				if(a==0)count++;
				printf("%u\n",count);
			}
		}
	}

	return 0;
}
