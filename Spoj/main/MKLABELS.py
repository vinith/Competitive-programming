import sys
s=map(int,sys.stdin.read().split())
l=len(s)
for cases in range(1,l):
   n=s[cases-1];
   print "Case %d, N = %d, # of different labelings = %ld" %(cases,n,n**(n-2))