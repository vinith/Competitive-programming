#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
using namespace std;
int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int t,r,c;
	bool flag;
	scanf("%d",&t);
	while(t--)
	{
		flag=false;
		char str[101][101];
		scanf("%d %d",&r,&c);
		for(int i=0;i<r;i++)
			scanf("%s",str[i]);

		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				if(toupper(str[i][j])=='S'){
					if(i+4>=r&&j+4>=c)
						goto x;
					else if(i+4<r&&j+4<c){
						if(toupper(str[i][j+1])=='P'&&toupper(str[i][j+2])=='O'&&toupper(str[i][j+3])=='O'&&toupper(str[i][j+4])=='N'){
							flag=true;
							goto x;
						}
						else if(toupper(str[i+1][j])=='P'&&toupper(str[i+2][j])=='O'&&toupper(str[i+3][j])=='O'&&toupper(str[i+4][j])=='N'){
							flag=true;
							goto x;
						}
					}
					else if (i+4>=r){
						if(toupper(str[i][j+1])=='P'&&toupper(str[i][j+2])=='O'&&toupper(str[i][j+3])=='O'&&toupper(str[i][j+4])=='N'){
							flag=true;	
							goto x;
						}
					}
					else{
						if(toupper(str[i+1][j])=='P'&&toupper(str[i+2][j])=='O'&&toupper(str[i+3][j])=='O'&&toupper(str[i+4][j])=='N'){
							flag=true;
							goto x;
						}
					}

				}
			}
		}
x:
		if(flag)
			printf("There is a spoon!\n");
		else
			printf("There is indeed no spoon!\n");	
		for(int i=0;i<r;i++)
			strcpy(str[i]," ");
	}
	return 0;
}
