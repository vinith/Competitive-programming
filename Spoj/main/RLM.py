#import sys
#s=sys.stdin.read().split('\n')
def toDecimal(n,l):
    ret=''
    for i in range(0,l,2):
        ret+=(n[i+1]*int(n[i]))
    return int(ret)
def toRLM(n):
    #print n
    prev=n%10
    n//=10
    count=1
    ret=''
    if n==0: return '1'+str(prev)
    while n>10:
        temp=n%10
        n//=10
        if temp==prev:count+=1
        else:
            if count>=9:
                    while count>=9:
                        ret+=(str(prev)+'9')
                        count-=9
                    if count>0:ret=(str(prev)+str(count))+ret
                    prev,count=temp,1
	    else:
                ret+=(str(prev)+str(count))
                prev,count=temp,1
    if n==prev:count+=1
    #print ret,count
    while count>=9:
        ret+=(str(prev)+'9')
        count-=9
    if count>0:ret=(str(prev)+str(count))+ret
    if n !=prev: ret+=(str(n)+'1')
    return ret[::-1]
'''for line in s:
    try:
        inp=line.split()        
        num1=toDecimal(inp[0],len(inp[0]))
        num2=toDecimal(inp[2],len(inp[2]))
        op=inp[1]
        if op=='+':print '%s + %s = %s' % (inp[0],inp[2],toRLM(num1+num2))
        elif op=='-':print '%s - %s = %s' % (inp[0],inp[2],toRLM(num1-num2))
        elif op=='*':print '%s * %s = %s' % (inp[0],inp[2],toRLM(num1*num2))
        else:print '%s / %s = %s' % (inp[0],inp[2],toRLM(num1//num2))
    except:break'''
while 1:
  print toRLM(input())

