Case=0
while 1:
    Case+=1
    s=raw_input()
    if s[0]=='-':break
    stack=[]
    top=operations=0
    stack.append(s[0])
    for i in range(1,len(s)):
        if top<0:
            stack.append(i)
            top+=1
            continue
        if s[i]=='}':
            if stack[top]=='{':
                stack.pop()
                top-=1
            else:
                stack.append(s[i])
                top+=1
        else:
            stack.append(s[i])
            top+=1
    #print stack
    while(len(stack)>0):
        v1=stack.pop()
        v2=stack.pop()
        if v1==v2:operations+=1
        else:operations+=2
    print '%d. %d' % (Case,operations)
    
        
