for t in range(int(input())):
 try:
    a,b=input()
    a,b,count=ord(a)-96,int(b),0
    if b+2<=8:
        if a+1<=8:count+=1
        if a-1>=1:count+=1
    if b-2>=1:
        if a+1<=8:count+=1
        if a-1>=1:count+=1
    if a+2<=8:
        if b+1<=8:count+=1
        if b-1>=1:count+=1
    if a-2>=1:
        if b+1<=8:count+=1
        if b-1>=1:count+=1
    print (count)
 except:break


    
    
