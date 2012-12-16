using namespace std;
#include<iostream>
#include<cstdio>
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--){
		int mat1[76][76],mat2[76][76];
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			for(int k=0;k<n;k++){
				scanf("%d",&mat1[i][k]);
			}
		}
		for(int i=0;i<n;i++){
			for(int k=0;k<n;k++){
				scanf("%d",&mat2[i][k]);
			}

		}
		for(int i=n;i>=1;i--)
			printf("%d ",i);
		printf("\n");
		for(int i=n;i>=1;i--)
                        printf("%d ",i);
                printf("\n");


	}
	return 0;
}
