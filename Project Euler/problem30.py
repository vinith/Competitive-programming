def digSumPow(num,p):
    Sum=0
    while num>0:
        dig=num%10
        Sum+=(dig**p)
        num//=10
    return Sum
ans=0
for i in range(2,10**6):
    if i==digSumPow(i,5):
         #print i
         ans+=i
print ans
