using namespace std;
#include<iostream>
#include<cstdio>
#include<map>
int main(){
  int n,k1,k2;
  bool found=false;
  long long temp;
  map <long long,bool> val;
  map<int,map<int,long long> >used;
  scanf("%d",&n);
  long long arr[n];
  for(int i=0;i<n;i++)
    scanf("%lld",&arr[i]);
  for(int i=0;i<n;i++){
    for(int k=i+1;k<n;k++){
      //cout<<i<<" "<<k<<endl;
      temp=arr[i]^arr[k];
      if(val.find(temp)==val.end()){
        //cout<<arr[i]<<" xor "<<arr[k]<<" "<<temp<<endl;
        val[temp]=true;
        used[i][k]=used[k][i]=temp;
        printf("Xored value=%lld   index1=%d  index2=%d \n",temp,i,k);
      }else if(used[i]==false&&used[k]==false){
        //k1=keY[temp][0];k2=keY[temp][1];
        //cout<<arr[i]<<" xorr "<<arr[k]<<" "<<temp<<endl;
          //cout<<arr[i]<<" xorr "<<arr[k]<<" "<<temp<<endl;
          //cout<<arr[k1]<<" "<<arr[k2]<<" "<<arr[i]<<" "<<arr[k]<<endl;
          printf("and now same xorred value=%lld with %d %d\n",temp,i,k);
          found=true;goto op;
      }
    }
  }
  op:
  if(found)printf("Yes\n");
  else printf("No\n");
  return 0;
}