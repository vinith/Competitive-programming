using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
inline long read()
{
	 char temp;
	bool neg=false;
	long x=0;
	temp=getchar_unlocked();
	while(temp<45)temp=getchar_unlocked();
	if(temp=='-')
		neg=true;
	else
		x+=(temp-'0');
	temp=getchar_unlocked();
	while(temp>=48){
		x=x*10;
		x+=(temp-'0');
		temp=getchar_unlocked();
	}
	if(!neg)
		return x;
	else
		return x*-1ll; 
}
int main()
{
	int n,q,index;
	long X[50001],Y[50001],Z[50001],A[50001],B[50001],C[50001];
	long long min,temp1,temp2;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		X[i]=read();Y[i]=read();Z[i]=read();
	}
	scanf("%d",&q);
	for(int i=0;i<q;i++){
		A[i]=read();B[i]=read();C[i]=read();
	}
	/*for(int i=0;i<n;i++){
	  printf("%lld %lld %lld\n",X[i],Y[i],Z[i]);
	  }
	  for(int i=0;i<q;i++){
	  printf("%lld %lld %lld\n",A[i],B[i],C[i]);
	  }*/
	long nb=(q/70)+1;

	for(int j=0;j<nb;j++){
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
