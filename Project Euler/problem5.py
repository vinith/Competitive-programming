def lcm(a,b):
 l=a*b
 while b>0:
	a,b=b,a%b
 return l//a
n=1
for i in range(2,20):
   n=lcm(n,i)
print n
 


