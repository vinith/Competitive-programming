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
while num<3001:
    if '0' in str(num):
        count+=1
        Pds.append(num)
    elif isPds(num):
        count+=1
        Pds.append(num)
    num+=1  
    print count

while count<10**7:
    if '0' in str(num):
        count+=1
        Pds.append(num)
    print count
 
    
