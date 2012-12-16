def getDigit(a,b,k):
    for i in range(k):
        if i!=a and i!=b:return str(i)
    return '?'
for cases in range(input()):
    flag=True
    k=input()
    s=raw_input()
    l=len(s)
    s=list(s)
    #ans=''
    for i in range(l):
        current=s[i]
        prev=s[l-1] if i==0 else s[i-1]
        nxt=s[0] if i==l-1 else s[i+1]
        if current=='?':
            if prev=='?':prev=str(k)
            if nxt=='?':nxt=str(k)
            #print prev,nxt
            temp=getDigit(int(prev),int(nxt),k)
            if temp=='?':
                flag=False
                break
            #ans+=temp
            s[i]=temp
        elif current==prev or current==nxt:
            flag=False
            break
        #else:
            #ans+=current
    if flag:print ''.join(s)
    else:print 'NO'
    
