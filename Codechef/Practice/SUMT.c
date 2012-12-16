#include<stdio.h>
#define x(a,b) (a>b?a:b)
main()
{
	int t,n,k,i,j;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int m[101][101];
		for(i=0;i<n;i++){
			for(j=0;j<=i;j++){
				scanf("%d",&m[i][j]);
			}
		}
		for(i=n-1;i>0;i--){
			for(j=0;j<i;j++){
				k=x(m[i][j],m[i][j+1]);
				m[i-1][j]+=k;
			}
		}
		printf("%d\n",m[0][0]);
	}
}
