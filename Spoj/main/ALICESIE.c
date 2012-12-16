#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int t,n;
scanf("%d",&t);
while(t--){
scanf("%d",&n);
n=ceil((float)n/2);
printf("%d\n",n);
}
return 0;
}
