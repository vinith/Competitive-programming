factTable={}
def fact(num):
    if num<2:
        return 1
    elif num in factTable:
        return factTable[num]
    else:
        t=num*fact(num-1)
        factTable[num]=t
        return t
def digFact(num):
    Sum=0
    while num>0:
        Sum+=(fact(num%10))
        num//=10
    return Sum
ans=0
for i in range(3,10**5):
    if i==digFact(i):
        ans+=i
        #print i
print ans

