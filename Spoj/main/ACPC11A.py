import psyco
psyco.full()
def hasEnglish(st):
    for k in st:
        if k!='#' and k!=' ':return True
    return False
for z in range(input()):
    l=input()
    strng=raw_input()
    st,eng=strng.split(' '),False
    for k in range(l):
        if hasEnglish(st[k]):eng=True;break
    ans=''
    if eng:      
        for t in range(k+1,l):ans+=st[t]+' '	
        ans+=st[k]+' '
        if k>0:
            for t in range(k-1):ans+=st[t]+' '
            ans+=st[k-1]
        print ans
    else:print strng       
