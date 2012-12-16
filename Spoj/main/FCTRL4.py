import sys
s=sys.stdin.read().strip('\n')
s=s.split('\n')
f={}
def fact(n):
    if n<2:
        return 1
    elif n in f:
        return f[n]
    else:
        temp=n*fact(n-1)
        f[n]=temp
        return temp
for num in range(len(s)-1):
    print int(str(fact(int(s[num]))).strip('0'))%10
