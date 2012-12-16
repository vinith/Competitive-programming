def ispalin(n):
 return n==n[::-1]
n=0
for i in range(100,999):
  for k in range(100,999):
      t=i*k
      if(ispalin(str(t))):
        n=max(n,t)

print n  
