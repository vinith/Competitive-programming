import sys
#import psyco
#psyco.full()
inp=sys.stdin.read().strip()
inp=inp.split()
number='1234567890'
mcxi='ixcm'
start=1
def toDecimal(num):
    l=len(num)
    ret=0;
    for i in range(l):
        if num[i]=='m':
            if i==0 or (num[i-1] not in number):ret+=1000
            else:ret+=(int(num[i-1]))*1000
        elif num[i]=='c':
            if i==0 or (num[i-1] not in number):ret+=100
            else:ret+=(int(num[i-1]))*100
        elif num[i]=='x':
            if i==0 or (num[i-1] not in number):ret+=10
            else:ret+=(int(num[i-1]))*10
        elif num[i]=='i':
            if i==0 or (num[i-1] not in number):ret+=1
            else:ret+=(int(num[i-1]))*1
    return ret
def toMcxi(num):
    ret=''
    mcxiplace=0
    digit=0
    while num>0:
        digit=num%10
        num//=10
        if digit==1:ret+=mcxi[mcxiplace]
        elif digit>1:ret+=(mcxi[mcxiplace]+str(digit))
        mcxiplace+=1
    return ret[::-1]
for case in range(int(inp[0])):
    print toMcxi(toDecimal(inp[start])+toDecimal(inp[start+1]))
    start+=2

