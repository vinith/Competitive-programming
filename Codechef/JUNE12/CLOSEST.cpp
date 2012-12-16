using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
int main()
{
	int n,q,index;
	scanf("%d",&n);
	long long b[50001][3],r[50001][3],min,temp1,temp2;
	for(int i=0;i<n;i++){
		scanf("%lld %lld %lld",&r[i][0],&r[i][1],&r[i][2]);
	}
	scanf("%d",&q);
	for(int i=0;i<q;i++){
		scanf("%lld %lld %lld",&b[i][0],&b[i][1],&b[i][2]);
	}
	int nb=2;// number of banks to solve for


	/*for(int i=0;i<n;i++){
	printf("%ld %ld %ld\n",r[i][0],r[i][1],r[i][2]);
	}
	for(int i=0;i<q;i++){
	printf("%ld %ld %ld\n",b[i][0],b[i][1],b[i][2]);
	}*/


	// 1 bank first :P
	for(int i=0;i<nb;i++){
                min=999999999;
		for(int k=0;k<n;k++){
			temp1=(r[k][0]-b[i][0]);
			temp2=temp1*temp1;
			temp1=(r[k][1]-b[i][1]);
			temp2+=(temp1*temp1);
			temp1=(r[k][2]-b[i][2]);
			temp2+=(temp1*temp1);
			//cout<<temp2<<endl;
			if(temp2<min){
				min=temp2;
				index=k;
			}
		}
		printf("%d\n",index);
	}
	for(int i=nb;i<q;i++){
	printf("%d\n",0);
	}
	return 0;
}
