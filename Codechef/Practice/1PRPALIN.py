num=1003002
primes={}
primes[0]=primes[1]=False
palinPrimes=[]
def isPalin(num):
    if num[::-1]==num:return True
    return False
for i in range(int(num**0.5)):
    if i not in primes:
        k=i*i
        while k<=num:primes[k]=False;k+=i
for i in range(num+1):
    #if primes[i]
    if i not in primes and isPalin(str(i)):palinPrimes.append(i)
#print palinPrimes
