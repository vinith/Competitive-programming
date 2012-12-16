temp=int(600851475143**0.5)
sieve={}
for i in range(1,temp):
 sieve[i]=True
sieve[0]=sieve[1]=False
for i in range(temp):
    if sieve[i]!=False:
        j=i*2
        while j<temp:
         sieve[j]=False
         j+=i
k=temp
while 1:
  k-=1
  try:
     if sieve[k]!=False and 600851475143%k==0:
         print k 
         break    
  except:
     continue
