n=input()
A={}
output=''
L=0L
def pre():
  global output,L,A,n
  A[0]=1L
  index,start=0L,1L;
  while(start+start<=n):
    output+='%ld %ld\n' % (index,index)
    start+=start
    index+=1
    A[index]=start
  L=index
  return start
def solve(current,op,chain):
  global A,n,L
  if current==n:
    L+=chain
    return op
  for i in range(L,-1,-1):
    temp=current+A[i]
    #print temp,i,A[i]
    if temp<=n:
      chain+=1
      op+=("%ld %ld\n" % (current,A[i]))
      return solve(temp,op,chain)
current=pre()
#print A
ret=''
ret=solve(current,'',0L)
print L
print output.strip()
#print ret
  
  