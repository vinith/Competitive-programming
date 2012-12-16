using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<climits>

int main()
{
	int n,q,index;
	long long X[50001],Y[50001],Z[50001],A[50001],B[50001],C[50001];
	long long min,temp1,temp2;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%lld %lld %lld",&X[i],&Y[i],&Z[i]);
	}
	scanf("%d",&q);
	for(int i=0;i<q;i++){
		scanf("%lld %lld %lld",&A[i],&B[i],&C[i]);
	}
	int nb=300;

	for(int j=0;j<nb&&j<q;j++){
		temp1=X[0]-A[j];
		temp2=temp1*temp1;
		temp1=Y[0]-B[j];
		temp2=temp2+(temp1*temp1);
		temp1=Z[0]-C[j];
		temp2=temp2+(temp1*temp1);
		min=temp2;
		index=0;
		for(int i=1;i<n;i++){
			temp1=X[i]-A[j];
			temp2=temp1*temp1;
			temp1=Y[i]-B[j];
			temp2=temp2+(temp1*temp1);
			temp1=Z[i]-C[j];
			temp2=temp2+(temp1*temp1);
			//cout<<temp2<<endl;
			if(temp2<min){
				min=temp2;
				index=i;
			}
			//cout<<min<<endl;
		}
		printf("%d\n",index);
	}
	for(int i=nb;i<q;i++){
		printf("0\n");
	}
	return 0;
}
