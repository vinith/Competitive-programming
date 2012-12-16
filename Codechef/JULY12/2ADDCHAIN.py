n=input()
A={}
L=-1
current=0L
ret,output='',''
def pre():
  global output,L,A,n,current
  start=1L
  while start<n:
    L+=1
    A[L]=start
    start+=start
  if start==n:
    current=start
    L+=1
    A[L]=current
  else:
    current=start//2L
def prepOutput(length):
  op=''
  for i in range(length):op+=(("%ld %ld\n")%(i,i))
  return op.strip()
def solve(current,chain,op):
  global A,n,L
  if current==n:
    L=chain
    return op.strip()    
  for i in range(len(A)-1,-1,-1):
    temp=current+A[i]
    if temp<=n:
      #print op+("%ld %ld\n" % (chain,i+1))
      #print temp,i+1,A[i]
      A[chain]=temp
      return solve(temp,chain+1,op+("%ld %ld\n" % (i,chain)))

pre()
#print current
#print A
#print L
output=prepOutput(L)
ret=solve(current,L,'')
#print n
print L
print output
if ret!='':print ret