#include<stdio.h>
#include<string.h>
int m[100][100],c[100][100],n,k;
#define x(a,b) (a>b?a:b)
#define t(r)  memset(r,0,40000)
int s(int i,int j){if(i>=n)return 0;k=c[i][j];if(k!=0)return k;k=x(s(i+1,j),s(i+1,j+1))+m[i][j];c[i][j]=k;return k;}
main(){int t,i,j;scanf("%d",&t);while(t--){scanf("%d",&n);for(i=0;i<n;i++){for(j=0;j<=i;j++)scanf("%d",&m[i][j]);}printf("%d\n",s(0,0));t(m);t(c);}}
