#include<stdio.h>
#include<math.h>
main(){int t,n,c,d,x;scanf("%d",&t);while(t--){scanf("%d",&n);c=ceil((sqrt(1+8*n)-1)*0.5);d=n-(c*(c+1)*0.5)+c-1;n=1+d;x=c-d;c%2?printf("%d/%d\n",x,n):printf("%d/%d\n",n,x);}}
