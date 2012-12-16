temp=200000
sieve={}
#for i in range(1,1000000000000):
# sieve[i]=True
count=0
sieve[0]=sieve[1]=False
for i in range(temp):
    if i not in sieve:
        #print i
        count+=1
        #print count
        if count==10001:
          print i
          break
        j=i*2
        while j<temp:
         sieve[j]=False
         j+=i

