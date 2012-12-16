x=input()
y=input()
for xx in range(x,y+1):
  num=input()
  chain=input()
  if chain>=500:
    print num,chain
    break
  #print chain
  A={}
  A[0]=1
  ans=0
  for i in range(1,chain+1):
    a,b=map(int,raw_input().split())
    if i<=a or i<=b:
      print i,a,b
      break
    #print a,b
    A[i]=A[a]+A[b]
    ans=A[i]
  if ans==num:continue
  else:
    print "wrong"
    print num,ans
    break
print 'done'