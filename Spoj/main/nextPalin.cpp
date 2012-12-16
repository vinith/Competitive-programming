#include<iostream>
#include<iomanip>
using namespace std;
unsigned int reverse_dig(unsigned int n)
{
	unsigned int rev=0;
	if(n==10){
	//cout<<n<<" returning 1";
	return 1;
	}
	while(n>9)
	{
		rev=(rev+(n%10))*10;
		n=n/10;
	}
	rev+=n;
	return rev;
}
int digits(unsigned int n)
{	
	int digit=0;
	while(n>9)
	{       
		n=n/10;
		digit++;	
	}
	digit++;
	return digit;
}
void next_palindrome(unsigned int n,int l)
{       
	int divisor=1,digit=1,div_fin;
	for(int i=1;i<l;i++)divisor*=10;
	unsigned int left=0,middle=0,right=0;
	for(int i=0;i<l/2;i++)
	{       
		digit=(n/divisor);
		left+=digit;
		n-=digit*divisor;
		divisor=divisor/10;
		left*=10;	
	}
	if(l%2==0){right=n;left/=10;}
	else{
		digit=(n/divisor);
		middle+=digit;
		n-=digit*divisor;
		right=n;
		left/=10;
	}
	//cout<<left<<" "<<middle<<" "<<right;
	if(l%2==0)  //if even num, next palin is
	{
		int releft=reverse_dig(left);
		if(releft>right)right=releft;
		else{
			left++;
			right=reverse_dig(left);
			
		}
		cout<<left;
		cout<<setw(digits(left))<<setfill('0')<<right;
		cout<<endl;

	}
	else{  //if num is odd,palin is
		int releft=reverse_dig(left);
		if(releft>right)right=releft;
		else {  
			middle++;
			right=releft;
			
		}
		//cout<<"-->"<<right;
		cout<<left<<middle;
		cout<<setw(digits(left))<<setfill('0')<<right<<endl;
	}

}
int main()
{
	unsigned int number;
	cin>>number;
	if(number==reverse_dig(number))
	next_palindrome(number+1,digits(number+1));
	else
	next_palindrome(number,digits(number));
	return 0;
}
