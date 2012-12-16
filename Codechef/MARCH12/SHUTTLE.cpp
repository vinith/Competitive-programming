#include<iostream>
#include<stdio.h>
int main()
{
	int t,n,count;
	scanf("%d",&t);
	while(t--){
		count=1;
		int occurence[10000]={0}
		scanf("%d",&n);
		for(int i=2;i<n;i++){		
			int temp=0;
			for(int j=1;j<n;j++){
				if(occurence[j]==0&&occurence[j]=1)
					temp++;
				if(j+i>n){
				if(occurence[((j+i)%n)+1])
				}
			}
		}
	}
	return 0;
}
