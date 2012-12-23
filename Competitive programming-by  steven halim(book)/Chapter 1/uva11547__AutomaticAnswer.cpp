#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main(){
  int t;
  double n;
  scanf("%d",&t);
  while(t--){
    scanf("%lf",&n);
    n=((n*567/9+7492)*235/47-498);
    printf("%d\n",abs((int(n)/10)%10));
  }
  return 0;
}
