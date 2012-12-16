using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<math.h>
int main()
{
	int t,n,term,displacement;
	float temp;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		temp = 1+(8.0*n);
		temp=sqrt(temp);
	        temp=(temp-1)*0.5;
		term=ceil(temp);
		//cout<<"t:"<<term<<endl;
		displacement=n-(term*(term+1)*0.5)+term-1;
		//cout<<"d "<<displacement<<endl;
		printf("TERM %d IS ",n);
		if(term%2==0)printf("%d/%d\n",1+displacement,term-displacement);
		else printf("%d/%d\n",term-displacement,1+displacement);
	}
	return 0;
}
