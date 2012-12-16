import sys,math
inp=input()
inp=sys.stdin.read().split()
for n in inp:
   n=int(n)-1
   if n==0:print ('1');continue
   x=1<<n
   f= "%%.%df" % (n)
   op=f% (1.0/x)
   print(op)