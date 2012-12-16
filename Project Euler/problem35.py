primes={}
temp=10**6
primes[0]=primes[1]=False
def isCircularPrime(num):
    snum=str(num)
    l=len(snum)
    for k in range(1,l):
      temp=int(snum[-k:]+snum[:l-k])
      try:
          if primes[temp]==False: return False
      except: return False
    return True
for i in range(int(temp)):
    if i not in primes:
        primes[i]=True
        k=i*2
        #if i==1009:print 'aaa'
        while k<temp:
            #if k==1009:print 'aaa'
            primes[k]=False
            k+=i

#for i in range(temp):
    #if i not in primes:print i
count=0
for k in range(temp):
 try:
  if primes[k]==True and isCircularPrime(k):count+=1
 except:
  continue
print count
