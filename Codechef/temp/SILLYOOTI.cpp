#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n,nums[100000],max,q,query,temp,pos;
	scanf("%d",&n);
	scanf("%d",&nums[0]);
	//max=nums[0];
	for(int i=1;i<n;i++){
		scanf("%d",&nums[i]);
		//if(max<nums[i])
		 // max=nums[i];
	}
	scanf("%d",&q);
	//cout<<max<<endl;
	while(q--){
		scanf("%d",&query);
		max=query^nums[0];
		pos=0;
		for(int i=1;i<=n;i++){
		      //cout<<"2";
			temp=query^nums[i];
			if(temp>max){
				max=temp;
				pos=i;
			}
		}
		printf("%d  %d\n",max,nums[pos]);
	}
	return 0;
}
