#from datetime import datetime
#startTime = datetime.now()
temp=2000000
sieve={}
Sum=0
sieve[0]=sieve[1]=False
for i in range(temp):
    if i not in sieve:
        #print i
        Sum+=i
        #print count
        j=i*2
        while j<temp:
         sieve[j]=False
         j+=i
print Sum

#print(datetime.now()-startTime)
