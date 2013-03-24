#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<map>
#include<vector>
#include<deque>
#include<stack>
#include<set>
using namespace std;
int main(){   
  int n,k,cost;
  long long tot;
  multiset<int>::iterator st,en;
  while(scanf("%d",&n)&&n!=0){
    tot=0;
    multiset<int> urn;
    while(n--){
      scanf("%d",&k);
      while(k--){
        scanf("%d",&cost);
        urn.insert(cost);
      }
      st=urn.begin();
      en=urn.end();
      en--;
      tot+=(*en)-(*st);
      urn.erase(st);
      urn.erase(en);
    }
    printf("%lld\n",tot);
  }
  return 0;
}
