d=[]
d.append(1)
d.append(2)
x=10**100
f1=1
f2=2
import sys
while f2<x:
    f1,f2=f2,f1+f2
    d.append(f2)
for line in sys.stdin:
    a,b=line.split()
    try:
     a,b=int(a),int(b)
    except:
     break
    if a==b==0: break
    for i,x in enumerate(d):
        #print (x)
        if x>int(a):
            v1=i
            #print (v1)
            for k in range (i,480):
                if d[k]>int(b):
                    v2=k
                    break
            break
    print (v2-v1)   
    



