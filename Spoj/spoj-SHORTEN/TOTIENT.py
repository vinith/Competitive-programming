for t in range(input()):
 i,n=2,input()
 a=n
 while i*i<=n:
	if n%i==0:
		a-=a/i
	while n%i==0:
		n/=i
	i+=1	        	
 if n>1:a-=a/n
 print a

