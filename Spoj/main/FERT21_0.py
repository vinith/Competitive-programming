import sys,math
inp=input()
inp=map(int,sys.stdin.read().split())
for n in inp:
   try:
      if n==1:print '1';continue
      x=str(5**(n-1))
      l=len(x)
      #l=int(math.log10(5**(n-1)))+1
      #print l
      print '0.'+'0'*(n-1-l)+x
   except: break