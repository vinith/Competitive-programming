n=input()
pcy=map(int,raw_input().split(' '))
visited=[False]*n
startIndex=0
while visited[n-1]==False:
    output=''
    for i in range(startIndex,n):
        if visited[i]==False:
            startIndex=i
            break
    #print startIndex
    startVar=pcy[startIndex]
    visited[startIndex]=True
    output+=str(startIndex+1)+' '
    current=pcy[startVar-1]
    visited[startVar-1]=True
    output+=str(startVar)+' '
    while current!=startVar:
        temp=current
        current=pcy[current-1]
        visited[temp-1]=True
        output+=str(temp)+' '
    print output
    
