import sys
for i in range(int(raw_input())):
    n=raw_input()
    try:
        n=int(n)
        t=2**n
        s=0
        while t>0:
            s+=t%10
            t//=10
        print s
    except:
        break
    
