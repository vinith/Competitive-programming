while 1:
    s=sorted(map(int,raw_input().split(' ')))
    if s[0]==s[1]==s[2]==0:break
    if s[2]**2==(s[1]**2)+(s[0]**2):print 'right'
    else : print 'wrong'
