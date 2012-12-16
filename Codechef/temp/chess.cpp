using namespace std;
#include<cstdio>
int main()
{
	int t,a,b,count;
	char temp[3];
	scanf("%d",&t);
	while(t--){
		count=0;
		scanf("%s",temp);
		a=temp[0]-96;
		b=temp[1]-48;
		if(b+2<=8){
			if(a+1<=8)count++;
			if(a-1>=1)count++;
		}
		if(b+-2>=1){
                        if(a+1<=8)count++;
                        if(a-1>=1)count++;
                }
                if(a+2<=8){
                        if(b+1<=8)count++;
                        if(b-1>=1)count++;
                }
		if(a-2>=1){
                        if(b+1<=8)count++;
                        if(b-1>=1)count++;
                }
		printf("%d\n",count);
	}
	return 0;
}
