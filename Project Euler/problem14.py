numList=[]
def solve(number,chainLength):
    if number in numList:
        return chainLength
    numList.append(number)
    if number%2==0:
        return solve(number//2,chainLength+1)
    else:
        return solve((3*number)+1,chainLength+1)

Max=0
for i in range(1,1000000):
    temp=solve(i,0)
    print i,temp
    if temp>Max:
        answer=i
        Max=temp
    del numList[:]    
print answer     
