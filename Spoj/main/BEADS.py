for case in range(input()):
    s=raw_input()
    least,index=s,0
    for i in range(1,len(s)):
        temp=s[i:]+s[0:i]
        if temp<least:least,index=temp,i
    print index+1
