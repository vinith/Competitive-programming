#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int r,c,k,count=1;
		scanf("%d %d %d",&r,&c,&k);
		int x=0,y=k-1;
		char maze[1000][1000];
		bool br=false;
		for(int i=0;i<r;i++){
			scanf("%s",maze[i]);

		}
		while(1){
			switch(maze[x][y]){
				case 'S': maze[x][y]=count;
					  x++;
					  break;
				case 'N': maze[x][y]=count;
					  x--;
					  break;
				case 'W': maze[x][y]=count;
					  y--;
					  break;
				case 'E': maze[x][y]=count;
					  y++;
					  break;
				default:
					  printf("%dL\n",count-(maze[x][y]));
					  br=true;
					  break;
			}
			if(br)
				break;
			if(x<0||x>r-1||y<0||y>c-1){
				printf("%dE\n",count);
				break;
			}
			count++;

		}

	}
	return 0;
}
