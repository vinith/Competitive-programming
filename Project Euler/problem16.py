n=2**1000
t=0
while n>0:
  t+=n%10
  n//=10
print t
