#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
using namespace std;
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int t,r,c;
	bool flag;
	scanf("%d",&t);
	while(t--)
	{
		flag=false;
		char str[100][101];
		scanf("%d %d",&r,&c);
		//for(int i=0;i<r;i++)
			//cout<<str[i]<<endl;
		for(int i=0;i<r;i++)
			scanf("%s",str[i]);

		//for(int i=0;i<r;i++)
                   //cout<<str[i]<<endl;


		for(int i=0;flag==false&&i<r;i++){
			for(int j=0;j<c;j++){
				if(toupper(str[i][j])==83){
					try{
						if(toupper(str[i][j+1])==80&&toupper(str[i][j+2])==79&&toupper(str[i][j+3])==79&&toupper(str[i][j+4])==78){
							flag=true;
							//cout<<toupper(str[i][j+1]);
							break;
						}
						else if(toupper(str[i+1][j])==80&&toupper(str[i+2][j])==79&&toupper(str[i+3][j])==79&&toupper(str[i+4][j])==78){
							flag=true;
							break;
						}
					}
					catch (int x){

					}


				}

			}
		}
		if(flag)
			printf("There is a spoon!\n");
		else
			printf("There is indeed no spoon!\n");
		for(int i=0;i<r;i++)
		 strcpy(str[i]," ");	
	}
	return 0;
}
