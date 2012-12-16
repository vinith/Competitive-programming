#include<stdio.h>
#define p(a) printf("%d\n",a)
main(int x,int y,char c,int n)
{      
	if(scanf("%d",&n))
		while(n--&&scanf("%d%c%d",&x,&c,&y)){
			if(c=='+'?p(x+y):c=='-'?p(x-y):c=='*'?p(x*y):1){}
		}

}

