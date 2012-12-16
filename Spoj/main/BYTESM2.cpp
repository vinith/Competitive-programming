using namespace std;
#include<cstdio>
#include<cstdlib>
#include<cstring>
inline int max(int a,int b){
  if(a>b)
    return a;
  return b;
}
int main(){
  int fare[104][104],n,m;
  int maxx,t;
  scanf("%d",&t);
  while(t--){
  scanf("%d %d",&n,&m);
  for(int i=0;i<n;i++)for(int k=0;k<m;k++)scanf("%d",&fare[i][k]);
  for(int i=n-2;i>=0;i--)
    for(int k=0;k<m;k++){
      if(k==0)
        fare[i][k]+=max(fare[i+1][k],fare[i+1][k+1]);
      else if(k==m-1)
        fare[i][k]+=max(fare[i+1][k],fare[i+1][k-1]);
      else
        fare[i][k]+=max(fare[i+1][k],max(fare[i+1][k+1],fare[i+1][k-1]));
    }
  maxx=fare[0][0];
  for(int i=1;i<m;i++)
    if(maxx<fare[0][i])maxx=fare[0][i];
  printf("%d\n",maxx);
  }
  return 0;
}