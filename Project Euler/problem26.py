d=[]
Max=0
for i in range(2,1001):
    count=1
    d.append(10)
    r=10%i
    r*=10
    while r>0:
        if r in d:
            break
        else:
            count+=1
            d.append(r)
        r%=i
        r*=10
    if count>Max:
       dval=i
       Max=count 
    del d[:]
print dval
