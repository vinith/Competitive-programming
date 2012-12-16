using namespace std;
#include<iostream>
#include<cstdio>
#include<map>
int main(){
  int n,k1,k2;
  bool found=false;
  long long temp,n1;
  map <long long,bool> val;
  map<long long,map<int,int> >keY;
  scanf("%d",&n);
  long long arr[n];
  for(int i=0;i<n;i++)
    scanf("%lld",&arr[i]);
  for(int i=0;i<n;i++){
    n1=arr[i];
    for(int k=i+1;k<n;k++){
      temp=n1^arr[k];
      if(val.find(temp)==val.end()){
        val[temp]=true;
        keY[temp][0]=i;keY[temp][1]=k;
        //printf("Xored value=%lld   index1=%d  index2=%d \n",temp,i,k);
      }
      else{
        k1=keY[temp][0];k2=keY[temp][1];
        //cout<<arr[i]<<" xorr "<<arr[k]<<" "<<temp<<endl;
        if((k1!=k)&&(k2!=k)&&(k1!=i)&&(k2!=i)){
          //cout<<k1<<" "<<k2<<" "<<i<<" "<<k<<" "<<endl;
          //printf("and now same xorred value=%lld with %d %d\n",temp,i,k);
          found=true;goto op;
        }
        //else printf("index1=%d index2=%d repeat ignored\n",i,k);
      }
    }
  }
  op:
  if(found)printf("Yes\n");
  else printf("No\n");
  return 0;
}