#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n,temp,temp1,nums[35],i;
	while(scanf("%d",&n)){
		for(i=1;i<=n;i++){
			nums[i-1]=i;
			if(i>9){
				temp1=temp=i-1;
				while(nums[temp]>9){
					nums[temp]=i%10;
					nums[temp-1]=nums[temp-1]+1;
					temp--;
				}
			}
		}
		//cout<<i<<endl;
		temp1=n;
		for(i=n;i>1;i--){
			nums[temp1]=i-1;
			if(i-1>9){
                                temp=temp1;
                                while(nums[temp]>9){
                                        nums[temp]=(i-1)%10;
                                        nums[temp-1]=nums[temp-1]+1;
                                        temp--;
                                }
                        }
			temp1++;	
		}
		temp=0;
		for(int i=0;i<(n*2)-1;i++){
		  temp+=nums[i];
			cout<<nums[i]<<" ";
		  }
		//cout<<temp<<endl;
	}
	return 0;
}
