#include<stdio.h>
#define p(a) printf("%d\n",a)
#define ans() while(n--&&scanf("%d%c%d",&x,&c,&y)){c=='+'?p(x+y):c=='-'?p(x-y):c=='*'?p(x*y):1}

main(int x,int y,char c,int n)
{       
	if(scanf("%d",&n))
		if(ans()){}

}
