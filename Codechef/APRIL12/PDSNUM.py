def isPds(n):
    s,p=0,1
    while n>0:
        temp=n%10
        s+=(temp)
        p*=(temp)
        n//=10
    if p%s==0:
        return True
    return False
 
count,num=0,1
Pds=[]
while count<10**7:
    zeroFound=False
    snum=str(num)
    for i in range(0,len(snum)):
        if snum[i]=='0':
            zeroFound=True
            pos=len(snum)-i-1
            temp=10**pos
            for k in range(num,num+temp):
                Pds.append(k)
            count+=(temp-1)
            num+=(temp-1)
            
            break
    if zeroFound==False:
        if isPds(num):
            Pds.append(num)
            count+=1
    num+=1
    #print count
#print Pds
      
    
