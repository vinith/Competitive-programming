#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
  int n,toggle;
  int m,c;
  int fuses[21];
  int current,highest,sequence=0;
  while(scanf("%d %d %d",&n,&m,&c)&&n!=0&&m!=0&&c!=0){
    bool states[21]={false};
    current=highest=0;
    sequence++;
    for(int i=1;i<=n;i++)scanf("%d",&fuses[i]);
    while(m--){
      scanf("%d",&toggle);
      states[toggle]=!states[toggle];
      if(states[toggle])current+=fuses[toggle];
      else current-=fuses[toggle];
      highest=max(highest,current);
    }
    if(highest>c)printf("Sequence %d\nFuse was blown.\n",sequence);
    else printf("Sequence %d\nFuse was not blown.\nMaximal power consumption was %d amperes.\n",sequence,highest);
    putchar('\n');
  }
  return 0;
}
