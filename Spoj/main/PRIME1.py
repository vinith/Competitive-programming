prime={}
prime[0]=prime[1]=False
sqlim,ulim=31624,1000000001
def pre():
  for i in range(4,ulim,2):prime[i]=False
  for i in range(3,ulim,2):
    if i not in prime:
      for k in range(i+i,sqlim,i):prime[k]=False
pre()
for i in range(input()):
  a,b=map(int,raw_input().split())