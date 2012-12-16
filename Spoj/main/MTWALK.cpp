#include<iostream>
#include<stdio.h>
//#include<math.h>
using namespace std;
#define abss(x) (x<0?(-x):(x))
int n,m[100][100];
int minn=99999999;
int calc(int x,int y,int diff)
{
	int temp;
	//cout<<"diff: "<<diff<<endl;
	if(x==n&&y==n){
		if(diff<minn)
			minn=diff;
		//cout<<diff<<endl;
		return 0;
	}
	if(x<n&&y<n){
		temp=abss((m[x][y]-m[x+1][y+1]));
		if(diff>temp) calc(x+1,y+1,diff);
		else calc(x+1,y+1,temp);

		temp=abss((m[x][y]-m[x+1][y]));
		if(diff>temp) calc(x+1,y,diff);
		else calc(x+1,y,temp);

		temp=abss((m[x][y]-m[x][y+1]));
		if(diff>temp) calc(x,y+1,diff);
		else calc(x,y+1,temp);
	}
	else if(x<n){
		temp=abss((m[x][y]-m[x+1][y]));
		if(diff>temp) calc(x+1,y,diff);
		else calc(x+1,y,temp);
	}
	else if(y<n){
		temp=abss((m[x][y]-m[x][y+1]));
		if(diff>temp) calc(x,y+1,diff);
		else calc(x,y+1,temp);  

	}

}
int main()
{
	scanf("%d",&n);
	//cout<<abss(-10)<<abss(10)<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&m[i][j]);
		}
	}
	n--;
	calc(0,0,0);
	//cout<<abss((m[0][0]-m[1][1]))<<endl;
	printf("%d",minn);
	return 0;
}
