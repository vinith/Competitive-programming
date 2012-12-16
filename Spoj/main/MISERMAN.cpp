using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
int main()
{
  int fare[104][104],n,m;
  int minf;
  scanf("%d %d",&n,&m);
  for(int i=0;i<n;i++)for(int k=0;k<m;k++)scanf("%d",&fare[i][k]);
  for(int i=n-2;i>=0;i--)
    for(int k=0;k<m;k++){
      if(k==0)
        fare[i][k]+=min(fare[i+1][k],fare[i+1][k+1]);
      else if(k==m-1)
        fare[i][k]+=min(fare[i+1][k],fare[i+1][k-1]);
      else
        fare[i][k]+=min(fare[i+1][k],min(fare[i+1][k+1],fare[i+1][k-1]));
    }
  minf=fare[0][0];
  for(int i=1;i<m;i++)
    if(minf>fare[0][i])minf=fare[0][i];
  printf("%d\n",minf);
  return 0;
}