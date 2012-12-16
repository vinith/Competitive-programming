n=input()
A={}
output='0 0\n'
L=0
def pre():
  global output,L,A,n
  A[0]=1
  index,start=0,1;
  while(start+start<=n):
    start+=start
    index+=1
    A[index]=start
    output+='%ld %ld\n' % (index,index)
    #print start,index
  L=index
  return start
def solve(current,chain,op):
  global A,n,L,ret
  if current==n:
    L=chain
    ret=op
    return
  for i in range(L,-1,-1):
    temp=current+A[i]
    if temp<=n:
      #print op+("%ld %ld\n" % (chain,i+1))
      #print temp,i+1,A[i]
      chain+=1
      return solve(temp,chain,op+("%ld %ld\n" % (chain,i+1)))
current=pre()
#print current
#print A
ret=''
solve(current,L,'')
print L
print output.strip()
#print 'aaaaaaa'
print ret.strip()