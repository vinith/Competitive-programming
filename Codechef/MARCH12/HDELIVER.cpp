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
		cout<<"even before"<<endl;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(mat[i][j])
					printf("[%d][%d]=1 ",i,j,1);
				else
					printf("[%d][%d]=0 ",i,j,1);
			}
			cout<<endl;
		}


		while(m--){
			scanf("%d %d",&a,&b);
			mat[a][b]=mat[b][a]=true;
		}
		cout<<"before"<<endl;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(mat[i][j])
					printf("[%d][%d]=1 ",i,j,1);
				else
					printf("[%d][%d]=0 ",i,j,1);
			}
			cout<<endl;
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
		cout<<"after"<<endl;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(mat[i][j])
					printf("[%d][%d]=1 ",i,j,1);
				else
					printf("[%d][%d]=0 ",i,j,1);

			}
			cout<<endl;
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
