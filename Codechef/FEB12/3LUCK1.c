#include<stdio.h>
#define LL long long
//int diff[100002]={0};
int a[100002]={0};
int main()
{
	int t,a4=0,a7=0,val,p=0,i,l,n,d,tempo=0;
	for(i=1;i<=10;i++)
			{	tempo=0;
				l=i;
				while(l!=0)
				{d=l%10;
				l=l/10;
				if(d==4)a4++;
				else if(d==7)a7++;
				}
				tempo++;
				printf("%d\n",tempo);
				if(a4-a7==0)
					a[i]=a[i-1]+tempo;
				else 
					a[i]=a[i-1]+tempo-1;
			}
	scanf("%d",&t);
		while(t--)
		{
			scanf("%d",&n);
			printf("%d\n",a[n]);
		}
return 0;
} 
