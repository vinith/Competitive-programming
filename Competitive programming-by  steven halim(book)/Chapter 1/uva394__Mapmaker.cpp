#include<iostream>
#include<cstdio>
#include<map>
using namespace std;

int main(){
  int n,r;
  scanf("%d %d",&n,&r);
  map<string,int> revName;
  string names[n+10];
  int b[n+10],cd[n+10],d[n+10];
  int bounds[n+10][15][2];
  int dimension;
  for(int i=0;i<n;i++){
    cin>>names[i];
    revName[names[i]]=i;
    scanf("%d %d %d",&b[i],&cd[i],&d[i]);
    for(int k=0;k<d[i];k++)scanf("%d %d",&bounds[i][k][0],&bounds[i][k][1]);
  }
  int c[n+1],index,temp;
  string inp;
  int id[15];
  int ans,dimen;
  while(r--){
    cin>>inp;
    index=revName[inp];
    temp=d[index];
    for(int i=0;i<temp;i++)scanf("%d",&id[i]);
    dimen=d[index];
    c[dimen]=cd[index];
    for(int i=dimen-1;i>0;i--)c[i]=c[i+1]*(bounds[index][i][1]-bounds[index][i][0]+1);
    c[0]=b[index];
    for(int i=1;i<=dimen;i++)c[0]-=c[i]*bounds[index][i-1][0];
    ans=c[0];
    for(int i=1;i<=dimen;i++)ans+=c[i]*id[i-1];
    //for(int i=0;i<=d[index];i++)cout<<i<<" "<<c[i]<<"\n";
    cout<<inp<<"["<<id[0];
    for(int i=1;i<temp-1;i++)printf(", %d",id[i]);
    if(temp!=1)printf(", %d] = %d\n",id[temp-1],ans);
    else printf("] = %d\n",ans);
  }
  return 0;
}
