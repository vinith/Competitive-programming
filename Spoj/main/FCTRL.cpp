#include<stdio.h>
void find_five(unsigned long long x)
{
        long long count=0;
        if(x<5)goto p;
        x=x-(x%5);
        printf("--%lld\n",x);
        while(x!=0)
        {      
                count++;
                x-=5;
        }
        p:
        printf("%llu\n",count);
}
int main()
{
        unsigned long long value,num;
        scanf("%llu",&num);
        while(num--)
        {
                scanf("%llu",&value);
                find_five(value);       

        }
        return 0;
}

