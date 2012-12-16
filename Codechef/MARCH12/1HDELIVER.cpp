#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int t,n,m,a,b,q,x,y;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&m);
		bool mat[105][105]={false};
		while(m--){
			scanf("%d %d",&a,&b);
			mat[a][b]=mat[b][a]=true;
		}
		

		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(mat[i][j]&&j!=i){ // j's paths add to i's 
					for(int k=0;k<n;k++){
						if(mat[j][k])
							mat[i][k]=mat[k][i]=true;
					}
				}
			}

		}
		
		scanf("%d",&q);
		while(q--){
			scanf("%d %d",&x,&y);
			if(mat[x][y]||mat[y][x]||x==y)
				printf("YO\n");
			else
				printf("NO\n");
		}
	}
	return 0;
}
