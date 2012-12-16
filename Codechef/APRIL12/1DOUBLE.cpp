using namespace std;
#include<cstdio>
int main()
{
	int t;
	long long n;
	scanf("%d",&t);
	while(t--){
		scanf("%llu",&n);
		printf("%llu\n",n-(n%2));
	}
	return 0;
}
