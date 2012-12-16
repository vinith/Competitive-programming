#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	long long m[t],n[t];
	long long max;
	t--;
	cin>>m[0]>>n[0];
	max=n[0];
	for(int i=0;i<t;i++)
	{
		cin>>m[i]>>n[i];
		if(n[i]>max)
		{max=n[i];}
	}
	long long primes[max],count=0;
	int status=0;
	primes[0]=2;
	for(int i=3;i<=max;i++)
	{
		for(int k=0;k<=count;k++)
		{          
			status=0;
			if(primes[k]*primes[k]>i)
			{
			  break;
			}
			if(i%primes[k]==0)
			{     
			    		
			     status=1;
			     break;
			}
			
		  
		}
		if(status==0)
		{
		  count++;
		  primes[count]=i;
		 // cout<<primes[count]<<"Added at position:"<<count<<endl;
		}

	}
	for(int x=0;x<=count;x++)
	{
	cout<<primes[x]<<endl;
	
	}
	return 0;
}
