t=input()
while t:
 n=input()
 a,b=0,1
 while n:
  a,b=a+b,a
  n-=1
 print a
 t-=1
