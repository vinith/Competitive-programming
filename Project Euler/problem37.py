temp=10**6
sieve={}
def checker(num):
    snum=str(num)
    if num in sieve:
        return False
    for i in range(1,len(snum)):
       if(int(snum[:-i]) in sieve) or (int(snum[i:len(snum)]) in sieve):
           return False
    return True
        
count,Sum=0,0
sieve[0]=sieve[1]=False
for i in range(temp):
    if i not in sieve:
        j=i*2
        while j<temp:
            sieve[j]=False
            j+=i
#checker(3797)
for i in range(8,temp):
    if checker(i):
        print i        
        count+=1
        Sum+=i
print 'count '+str(count)
print 'Sum '+str(Sum)
