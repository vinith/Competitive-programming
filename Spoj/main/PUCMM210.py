pre={}
pre[1]=1
lim=1000001
mod=1000000003
for i in range(2,lim):
    pre[i]=pre[i-1]+((i**2)*((i+1)**2)//4)
while 1:
    print pre[input()]%mod
