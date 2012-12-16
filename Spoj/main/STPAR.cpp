using namespace std;
#include<iostream>
#include<cstdio>
#include<cstdlib>

int main()
{
	int n;
	int l,s,r;
	bool possible;
	while(scanf("%d",&n)&&n!=0){
		possible=true;
		int left[1001],side[1001],right[1001];
		s=r=-1;
		l=0;
		for(int i=0;i<n;i++)
			scanf("%d",&left[i]);
		while(left[l]!=1){
			s++;
			side[s]=left[l];
			l++;
			if(s>0){
				if(side[s]>side[s-1]){
					possible=false;
					//cout<<"side arrangement"<<endl;
					goto print;
				}
			}
		}
		r++; 
		right[r]=left[l];
		l++;
		while(!(l==n && s==-1)){
			if(l!=n&&(right[r]+1==left[l])){
				r++;
				right[r]=left[l];
				l++;
			}
			else if(s!=-1&&(right[r]+1==side[s])){
				r++;
				right[r]=side[s];
				s--;
			}
			else if(l<n){
				s++;
				side[s]=left[l];
				l++;
				if(s>0 && (side[s]>side[s-1])){
					possible=false;
					goto print;
				}
			}

		}
print:
		if(!possible)printf("no\n");
		else printf("yes\n");
	}
	return 0;
}
