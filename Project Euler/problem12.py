count=0;
i=0;
while count<500:
    count=0
    s=(i*(i+1))/2
    sq=int(s**0.5)
    #print i,s
    for k in range(1,sq+1):
        if s%k==0:
            count+=2
            #print k
    if s**0.5==sq:
        count-=1
    i+=1
print s
