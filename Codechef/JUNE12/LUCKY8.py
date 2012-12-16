lt=10**6
ans={}
def f4xf7(n):
    n=str(n)
    c4,c7=0,0
    for a in n:
        if a=='4':c4+=1
        elif a=='7':c7+=1
    return c4*c7
for i in range(lt):
    ans[i]=f4xf7(i)
#print ans
while 1:
    l,r=map(int,raw_input().split(' '))
    maxx=0
    op=''
    for i in range(l,r+1):
        temp=ans[i]
        if maxx<temp:maxx=temp
    print maxx
    #for i in range(l,r+1):
     #   if ans[i]==maxx:op+=(str(i)+' ')
    #print op
'''count=0
for i in range(10**6):
    if ans[i]==1: print i;count+=1
print count'''
