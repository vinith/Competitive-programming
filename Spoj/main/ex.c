#include <stdio.h>
#include <stdlib.h>

long int table[100000];

long long int f(long int x)
{	
	if(x < 100000)
		return table[x];
	return (f(x/2) + f(x/3) + f(x/4));
}

int construct_table()
{
	long int a ,b, c;
	int i;
	for(i = 0; i < 12; i++)
		table[i] = i;
	for(i = 12; i < 100000 ; i++)
	{
		a = i/2;
		b = i/4;
		c = i/3;
		table[i] = table[a] + table[b] + table[c];		
	}
}

int main()
{
	long int x;
	construct_table();
	while(scanf("%ld",&x)!=EOF) {
		if( x < 100000)
			printf("%ld\n", table[x]);
		else
			printf("%lld\n", f(x));
	}
	return 0;
}
