num=98690
primes=[True]*(num+1)
primes[0]=primes[1]=False
palinPrimes=[]
def isPalin(num):
    if num[::-1]==num:return True
    return False
for i in range(int(num**0.5)):
    if primes[i]:
        k=i*i
        while k<=num:primes[k]=False;k+=i
for i in range(num+1):   
    if primes[i] and isPalin(str(i)):palinPrimes.append(i)
#print palinPrimes
inp=input()
if inp>98689:
    print '1003001'
else:
    start=0
    while(palinPrimes[start]<inp):start+=1
    print palinPrimes[start]
    
    
