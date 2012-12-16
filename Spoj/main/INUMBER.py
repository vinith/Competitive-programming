import sys
#inp=sys.stdin.read().strip('\n')
#inp=map(int,inp.split('\n'))
def sod(n):
    sum=0
    while n>0:
        sum+=(n%10)
        n//=10
    return sum
def solve(n):
    if n%9==0:
        temp=n//9
        start=int(str(n//temp)*temp)
    else:
        temp=1+(n//9) 
        start=int(str(n//temp)*temp)
    start=start-(start%n)
    #print start
    #print len(str(start))
    while 1:
         #print start
         if sod(start)==n:return start
         start+=n
#for n in range(1,inp[0]+1):
    #print solve(inp[n])
print solve(input())
