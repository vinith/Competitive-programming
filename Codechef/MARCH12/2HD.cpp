#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
	int t,n,m,a,b,q,x,y;
	bool flag;
	scanf("%d",&t);
	while(t--){
	scanf("%d %d",&n,&m);
		bool mat[100][100]={false};
		while(m--){
			scanf("%d %d",&a,&b);
			mat[a][b]=mat[b][a]=true;
		}

		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				flag=false;
				if(mat[i][j]&&j!=i){ // j's paths add to i's 
					for(int k=0;k<n;k++){
						if(mat[j][k]&&mat[i][k]==false){
							mat[i][k]=mat[k][i]=true;
							flag=true;			
						}

					}
					if(flag)
						j=0;

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
		//memset(mat,false,sizeof(mat));
	}
	return 0;
}
