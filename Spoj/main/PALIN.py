def nextPalin(st,l):
    if l%2==0:
        if len(str(int(st)+1))>l:print int(st)+2;return
        if st[:l//2]<=st[l//2:]:
            a=int(st[:l//2])+1
            a=str(a)
            print a+a[::-1]
        else:print st[:l//2]+st[:l//2][::-1]
    else:
        a=st[0:l//2]
        b=st[l//2]
        c=st[l//2+1:]
        if a>c:print a+b+a
        elif a<c:print c+b+c
        else:
           if b=='9':
               if len(str(int(st)+1))>l:print int(st)+2
               else:print str(int(a)+1)+'0'+str(int(a)+1)
           else: print a+str(int(b)+1)+a
for case in range(input()):
    pal=raw_input()
    nextPalin(pal,len(pal))
    
