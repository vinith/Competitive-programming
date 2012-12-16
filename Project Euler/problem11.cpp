using namespace std;
#include<iostream>
#include<cstdio>
#define max(a,b) (a>b?a:b)
int main()
{       freopen("problem11","r",stdin);
	int mat[26][26]={0};
	unsigned int Max=0;
	int right,down,rdiagonal,ldiagonal,temp;
	for(int i=0;i<20;i++){
		for(int j=0;j<20;j++){
			cin>>mat[i][j];
		}
	}
	/*for(int i=0;i<35;i++){
	  for(int j=0;j<35;j++){
	  cout<<mat[i][j]<<" ";
	  }
	  cout<<endl;
	  }*/

	for(int i=0;i<20;i++){
		for(int j=0;j<20;j++){
			ldiagonal=0;
			down=mat[i][j]*mat[i+1][j]*mat[i+2][j]*mat[i+3][j];
			right=mat[i][j]*mat[i][j+1]*mat[i][j+2]*mat[i][j+3];
			rdiagonal=mat[i][j]*mat[i+1][j+1]*mat[i+2][j+2]*mat[i+3][j+3];
			if(i>2){
				ldiagonal=mat[i][j]*mat[i+1][j-1]*mat[i+2][j-2]*mat[i+3][j-3];
			}
			Max=max(max(max(max(right,down),rdiagonal),ldiagonal),Max);
		}
	}
	cout<<Max<<endl;
	return 0;
}



