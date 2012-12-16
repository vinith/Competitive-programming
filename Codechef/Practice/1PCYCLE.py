n=input()
pcy=map(int,raw_input().strip().split())
startIndex,visited,visitedCount,cycleCount=0,[False]*n,0,0
output=''
while visitedCount!=n:
    cycleCount+=1
    for i in range(startIndex,n):
        if visited[i]==False:startIndex=i;break
    startVar,visited[startIndex]=pcy[startIndex],True
    output+=str(startIndex+1)+' ';visitedCount+=1
    current=pcy[startVar-1]
    if visited[startVar-1]==False:visited[startVar-1]=True;visitedCount+=1
    output+=str(startVar)+' '
    while current!=startVar:
        temp=current
        current=pcy[current-1]
        if visited[temp-1]==False:visited[temp-1]=True;visitedCount+=1
        output+=str(temp)+' '
    output=output.strip()+'\n'
print cycleCount
print output.strip()  
