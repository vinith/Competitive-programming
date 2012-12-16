using namespace std;
#include<iostream>
#include<cstdio>
#define mod 1000000007
int main()
{
	int bell[1003][1003]={0};
	bell[0][0]=1;
	for(int i=1;i<1003;i++){
		bell[i][0]=bell[i-1][i-1];
		for(int j=1;j<=i;j++){
			bell[i][j]=(bell[i][j-1]+bell[i-1][j-1])%mod;
		}
	}
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		printf("%d\n",bell[n-1][n-1]);
	}

	return 0;
}
