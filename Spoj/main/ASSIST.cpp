#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{       


	int t[40000],list[3001],count=0,k;
	for(unsigned int i=0;i<40000;i++)t[i]=i+2;
	for(unsigned int i=0;count<3001;i++){
		if(t[i]!=0){
			count++;
			list[count]=t[i];
			//cout<<"if"<<endl;
			k=0;
			for(unsigned int j=i+1;j+t[i]<40000;j++){
				if(t[j]!=0){
					k++;
					//cout<<"t[i]="<<t[i]<<" k="<<k<<endl;
				}
				if(k==t[i]){
					//cout<<"t[]
					t[j]=0;
					k=0;
				}
			}
		}
	}
	//cout<<list[10]<<" "<<list[20];
	/*for(int i=1;i<=500;i++){
	  cout<<i<<" "<<list[i]<<endl;
	  }*/
	//return 0;
	int n;
	while(scanf("%d",&n) && n!=0){
		printf("%d\n",list[n]);
	}
	return 0;
}
