import sys
inp=sys.stdin.read().strip('\n')
inp=inp.split('\n')
for i in xrange(int(inp[0])):
    a,b=map(int,inp[i+1].split())
    t1=a*(b//2+b%2)
    t2=b*(a//2+a%2)
    print max(t1,t2)
