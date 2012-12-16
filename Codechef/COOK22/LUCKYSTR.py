n,t=map(int,raw_input().split(' '))
lucky=[]
for i in range(n):
    temp=raw_input()
    lucky.append(temp)
for i in range(t):
    temp=raw_input()
    found=False
    if len(temp)>=47:
        print 'Good'
        continue
    for num in lucky:
        if num in temp:
            found=True
            break
    if found:print 'Good'
    else:print 'Bad'


