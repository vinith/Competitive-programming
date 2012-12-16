
#include<stdio.h>
#include<math.h>
int main()
{
	int t,n,i=2,rans=2,cans=4;;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		while(cans<n)
		{
			rans=pow(2,i);
			cans=pow(2,i+1);
			i++;
		}
		printf("%d\n",rans);;

	}
	return 0;
} 
