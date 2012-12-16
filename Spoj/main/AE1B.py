n,k,s=raw_input().split(' ')
boxes=raw_input()
boxes=map(int,boxes.split(' '))
required,current,counter=int(k)*int(s),0,0
boxes=sorted(boxes)
n=int(n)
for  i in range(n-1,-1,-1):
    if current<required:current+=int(boxes[i]);counter+=1
    else:break;
print counter
